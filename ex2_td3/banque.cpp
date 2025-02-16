#include "banque.h"
#include <iostream>

// Constructeur
Compte::Compte() : numCompte(0), nomProprietaire(""), solde(0.0) {}
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

void Compte::saisir() {
    std::cout << "Entrez le numéro de compte: ";
    std::cin >> numCompte;
    std::cout << "Entrez le nom du propriétaire: ";
    std::cin >> nomProprietaire;
    std::cout << "Entrez le solde: ";
    std::cin >> solde;
}
void Compte::afficher() const {
    std::cout << "Numéro de compte: " << numCompte << std::endl;
    std::cout << "Nom du propriétaire: " << nomProprietaire << std::endl;
    std::cout << "Solde: " << solde << std::endl;
}

