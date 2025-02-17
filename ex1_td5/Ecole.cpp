#include "Ecole.h"
#include <iostream>
#include <algorithm>

void Ecole::ajouterEtudiant(const Etudiant& etudiant) {
    etudiants.push_back(etudiant);
}

void Ecole::afficherEtudiants() const {
    for (const auto& etudiant : etudiants) {
        etudiant.afficher();
        std::cout << "----------------------" << std::endl;
    }
}

Etudiant* Ecole::rechercherEtudiant(int numeroIdentite) {
    for (auto& etudiant : etudiants) {
        if (etudiant.getNumeroIdentite() == numeroIdentite) {
            return &etudiant;
        }
    }
    return nullptr;
}

void Ecole::supprimerEtudiant(int numeroIdentite) {
    etudiants.erase(std::remove_if(etudiants.begin(), etudiants.end(),
                                   [numeroIdentite](const Etudiant& etudiant) {
                                       return etudiant.getNumeroIdentite() == numeroIdentite;
                                   }),
                    etudiants.end());
}

void Ecole::afficherEtudiantsParClasse(const std::string& classe) const {
    for (const auto& etudiant : etudiants) {
        if (etudiant.getClasse() == classe) {
            etudiant.afficher();
            std::cout << "----------------------" << std::endl;
        }
    }
}