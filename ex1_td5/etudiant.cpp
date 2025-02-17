#include "etudiant.h"
#include <iostream>

Etudiant::Etudiant(std::string nom, std::string adresse, std::string classe, std::string dateNaissance, int numeroIdentite)
    : nom(nom), adresse(adresse), classe(classe), dateNaissance(dateNaissance), numeroIdentite(numeroIdentite) {}

std::string Etudiant::getNom() const {
    return nom;
}

std::string Etudiant::getAdresse() const {
    return adresse;
}

std::string Etudiant::getClasse() const {
    return classe;
}

std::string Etudiant::getDateNaissance() const {
    return dateNaissance;
}

int Etudiant::getNumeroIdentite() const {
    return numeroIdentite;
}

void Etudiant::afficher() const {
    std::cout << "Nom: " << nom << "\nAdresse: " << adresse << "\nClasse: " << classe
              << "\nDate de Naissance: " << dateNaissance << "\nNuméro d'Identité: " << numeroIdentite << std::endl;
}