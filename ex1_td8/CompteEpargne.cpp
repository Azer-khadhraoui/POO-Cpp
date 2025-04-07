#include "CompteEpargne.h"

CompteEpargne::CompteEpargne(const std::string& rib, double solde, double taux)
    : Compte(rib, solde, 5.0), tauxInteret(taux) {
}

CompteEpargne::~CompteEpargne() {
}

double CompteEpargne::getTauxInteret() const {
    return tauxInteret;
}

void CompteEpargne::setTauxInteret(double taux) {
    if (taux >= 0) {
        tauxInteret = taux;
    }
}

double CompteEpargne::calculerInteret() const {
    return solde * tauxInteret / 100.0;
}

void CompteEpargne::ajouterInteret() {
    double interet = calculerInteret();
    solde += interet;
}

void CompteEpargne::afficher() const {
    std::cout << "Compte Épargne - RIB: " << rib << ", Solde: " << solde 
              << " DT, Taux d'intérêt: " << tauxInteret << "%" << std::endl;
}

CompteEpargne& CompteEpargne::operator=(const CompteEpargne& autre) {
    if (this != &autre) {
        Compte::operator=(autre);
        tauxInteret = autre.tauxInteret;
    }
    return *this;
}