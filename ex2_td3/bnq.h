#ifndef BNQ_H
#define BNQ_H

#include <vector>
#include <string>
#include "banque.h"

class banque {
private:
    std::vector<Compte> comptes;
    std::string nombanque;

public:
    // Constructeurs
    banque();  // Déclaration du constructeur par défaut
    banque(const std::string& nom);

    // Getters
    std::vector<Compte> getComptes() const;
    std::string getNombanque() const;

    // Méthodes
    void chercherCompte(int RIB, int* n);
    void ajoutCompte(Compte c, int* n);
};

#endif // BNQ_H