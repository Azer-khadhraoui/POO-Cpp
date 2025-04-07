#include "Compte.h"

Compte::Compte(const std::string& _rib, double _solde, double _soldeMin)
    : rib(_rib), solde(_solde), soldeMin(_soldeMin) {
}

Compte::~Compte() {
}

std::string Compte::getRib() const {
    return rib;
}

double Compte::getSolde() const {
    return solde;
}

double Compte::getSoldeMin() const {
    return soldeMin;
}

void Compte::deposer(double montant) {
    if (montant > 0) {
        solde += montant;
    }
}

bool Compte::retirer(double montant) {
    if (montant > 0 && (solde - montant) >= soldeMin) {
        solde -= montant;
        return true;
    }
    return false;
}

Compte& Compte::operator=(const Compte& autre) {
    if (this != &autre) {
        rib = autre.rib;
        solde = autre.solde;
        soldeMin = autre.soldeMin;
    }
    return *this;
}