#include "Banque.h"

Banque::Banque(const std::string& _nom, const std::string& _lieu)
    : nom(_nom), lieu(_lieu) {
}

Banque::~Banque() {
}

const std::string& Banque::getNom() const {
    return nom;
}

const std::string& Banque::getLieu() const {
    return lieu;
}

void Banque::ajouterCompte(Compte* compte) {
    if (compte) {
        // Vérifier que le compte n'existe pas déjà
        for (const auto& c : comptes) {
            if (c->getRib() == compte->getRib()) {
                std::cout << "Un compte avec ce RIB existe déjà !" << std::endl;
                delete compte; // Éviter la fuite mémoire
                return;
            }
        }
        
        comptes.push_back(std::unique_ptr<Compte>(compte));
    }
}

void Banque::ajouterCompteCourant(const std::string& rib, double solde) {
    ajouterCompte(new CompteCourant(rib, solde));
}

void Banque::ajouterCompteEpargne(const std::string& rib, double solde, double taux) {
    ajouterCompte(new CompteEpargne(rib, solde, taux));
}

Compte* Banque::rechercherCompte(const std::string& rib) {
    for (auto& compte : comptes) {
        if (compte->getRib() == rib) {
            return compte.get();
        }
    }
    return nullptr;
}

void Banque::afficherComptes() const {
    std::cout << "Banque " << nom << " (" << lieu << ")" << std::endl;
    std::cout << "Liste des comptes :" << std::endl;
    
    if (comptes.empty()) {
        std::cout << "Aucun compte enregistré." << std::endl;
        return;
    }
    
    for (const auto& compte : comptes) {
        compte->afficher();
    }
}

Banque& Banque::operator=(const Banque& autre) {
    if (this != &autre) {
        nom = autre.nom;
        lieu = autre.lieu;
        
        // Vider les comptes actuels
        comptes.clear();
        
        // Copier les comptes de l'autre banque
        for (const auto& compte : autre.comptes) {
            CompteCourant* courant = dynamic_cast<CompteCourant*>(compte.get());
            if (courant) {
                ajouterCompteCourant(courant->getRib(), courant->getSolde());
                continue;
            }
            
            CompteEpargne* epargne = dynamic_cast<CompteEpargne*>(compte.get());
            if (epargne) {
                ajouterCompteEpargne(epargne->getRib(), epargne->getSolde(), epargne->getTauxInteret());
            }
        }
    }
    return *this;
}