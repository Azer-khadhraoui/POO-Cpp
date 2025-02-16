#include "banque.h"

// Constructeur
Compte::Compte(int num, const std::string& nom, double sol)
    : numCompte(num), nomProprietaire(nom), solde(sol) {}

// Getters
int Compte::getNumCompte() const {
    return numCompte;
}

std::string Compte::getNomProprietaire() const {
    return nomProprietaire;
}

double Compte::getSolde() const {
    return solde;
}

// Setters
void Compte::setNumCompte(int num) {
    numCompte = num;
}

void Compte::setNomProprietaire(const std::string& nom) {
    nomProprietaire = nom;
}

void Compte::setSolde(double sol) {
    solde = sol;
}

