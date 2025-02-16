#include "bnq.h"
#include "banque.h"
#include <iostream>
#include <vector>
#include <string>


banque::banque() : nombanque("Banque par défaut") {}


banque::banque(const std::string& nom) : nombanque(nom) {}

// Getters
std::vector<Compte> banque::getComptes() const {
    return comptes;
}

std::string banque::getNombanque() const {
    return nombanque;
}


void banque::chercherCompte(int RIB, int* n) {
    for (int i = 0; i < comptes.size(); i++) {
        if (comptes[i].getNumCompte() == RIB) {
            *n = i;
            return;
        }
    }
    *n = -1;
}


void banque::ajoutCompte(Compte c, int* n) {
    comptes.push_back(c);  
    *n = comptes.size() - 1;  
}

