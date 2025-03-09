#include "proepi.h"
#include "produit.h"
#include "magasin.h"
#include <iostream>
#include <vector>
#include <string>


magasin::magasin() {
    
    this->nom = "";
}

void magasin::setNom(std::string nom){
    this->nom = nom;
}
std::string magasin::getNom(){
    return this->nom;
}
bool magasin::ajouterProduit(proepicerie& proepicerie){
    for (auto& p : proepiceries) {
        if (p.getId() == proepicerie.getId()) {
            std::cout << "Erreur : L'identifiant du produit existe déjà !" << std::endl;
            return false;
        }
    }
    proepiceries.push_back(proepicerie);
    return true;
}

void magasin::afficherProduits(){
    for(int i = 0; i < proepiceries.size(); i++){
        std::cout << "ID: " << proepiceries[i].getId() << std::endl;
        std::cout << "Nom: " << proepiceries[i].getNom() << std::endl;
        std::cout << "Libelle: " << proepiceries[i].getLibelle() << std::endl;
        std::cout << "Prix: " << proepiceries[i].getPrix() << std::endl;
        std::cout << "Quantite: " << proepiceries[i].getQuantite() << std::endl;
        std::cout << "Poids: " << proepiceries[i].getPoids() << std::endl;
    }
}
void magasin::supprimerProduit(){
    bool produitsSupprime = false;
    
   
    auto it = proepiceries.begin();
    while (it != proepiceries.end()) {
        if (it->getQuantite() == 0) {
            std::cout << "Produit en rupture supprimé - ID: " << it->getId() 
                      << ", Nom: " << it->getNom() << std::endl;
           
            it = proepiceries.erase(it);
            produitsSupprime = true;
        } else {
            
            ++it;
        }
    }
    
    if (!produitsSupprime) {
        std::cout << "Aucun produit en rupture de stock n'a été trouvé." << std::endl;
    } else {
        std::cout << "Tous les produits en rupture ont été supprimés." << std::endl;
    }
}
float magasin::prixTotal(){
    float prixTotal = 0;
    for (auto& p : proepiceries) {
        prixTotal += p.getPrix() * p.getQuantite();
    }
    std::cout << "Prix total: " << prixTotal << std::endl;
}