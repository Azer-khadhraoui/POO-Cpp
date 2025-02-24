#include "Ouvrage.h"
#include <iostream>


Ouvrage::Ouvrage() : code(0), titre(""), nombreExemplaires(0), prixUnitaire(0.0) {}


Ouvrage::Ouvrage(int c, const std::string& t, int n, double p)
    : code(c), titre(t), nombreExemplaires(n), prixUnitaire(p) {}


int Ouvrage::getCode() const {
    return code;
}

void Ouvrage::setCode(int c) {
    code = c;
}

std::string Ouvrage::getTitre() const {
    return titre;
}

void Ouvrage::setTitre(const std::string& t) {
    titre = t;
}

int Ouvrage::getNombreExemplaires() const {
    return nombreExemplaires;
}

void Ouvrage::setNombreExemplaires(int n) {
    nombreExemplaires = n;
}

double Ouvrage::getPrixUnitaire() const {
    return prixUnitaire;
}

void Ouvrage::setPrixUnitaire(double p) {
    prixUnitaire = p;
}


void Ouvrage::afficher() const {
    std::cout << "Code: " << code << std::endl;
    std::cout << "Titre: " << titre << std::endl;
    std::cout << "Nombre d'exemplaires: " << nombreExemplaires << std::endl;
    std::cout << "Prix unitaire: " << prixUnitaire << std::endl;
}

double Ouvrage::totalOuvrage() const {
    return nombreExemplaires * prixUnitaire;
}