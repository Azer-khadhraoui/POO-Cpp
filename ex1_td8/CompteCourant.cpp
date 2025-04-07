#include "CompteCourant.h"

CompteCourant::CompteCourant(const std::string& rib, double solde)
    : Compte(rib, solde, -500.0) {
}

CompteCourant::~CompteCourant() {
}

void CompteCourant::afficher() const {
    std::cout << "Compte Courant - RIB: " << rib << ", Solde: " << solde 
              << " DT, Découvert autorisé: " << -soldeMin << " DT" << std::endl;
}

CompteCourant& CompteCourant::operator=(const CompteCourant& autre) {
    if (this != &autre) {
        Compte::operator=(autre);
    }
    return *this;
}