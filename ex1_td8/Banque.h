#ifndef BANQUE_H
#define BANQUE_H

#include <vector>
#include <memory>
#include "Compte.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"

class Banque {
private:
    std::string nom;
    std::string lieu;
    std::vector<std::unique_ptr<Compte>> comptes;

public:
    Banque(const std::string& _nom, const std::string& _lieu);
    ~Banque();
    
    const std::string& getNom() const;
    const std::string& getLieu() const;
    
    void ajouterCompte(Compte* compte);
    void ajouterCompteCourant(const std::string& rib, double solde = 0.0);
    void ajouterCompteEpargne(const std::string& rib, double solde = 0.0, double taux = 2.5);
    
    Compte* rechercherCompte(const std::string& rib);
    void afficherComptes() const;
    
    Banque& operator=(const Banque& autre); // Opérateur d'affectation
};

#endif // BANQUE_H