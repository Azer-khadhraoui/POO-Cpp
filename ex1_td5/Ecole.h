#ifndef ECOLE_H
#define ECOLE_H

#include "etudiant.h"
#include <vector>

class Ecole {
private:
    std::vector<Etudiant> etudiants;

public:
    void ajouterEtudiant(const Etudiant& etudiant);
    void afficherEtudiants() const;
    Etudiant* rechercherEtudiant(int numeroIdentite);
    void supprimerEtudiant(int numeroIdentite);
    void afficherEtudiantsParClasse(const std::string& classe) const;
};

#endif // ECOLE_H