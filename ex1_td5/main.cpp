#include "Ecole.h"
#include "Etudiant.h"
#include <iostream>
#include <string>

int main() {
    Ecole ecole;
    int nombreEtudiants;

    std::cout << "Combien d'étudiants voulez-vous ajouter ? ";
    std::cin >> nombreEtudiants;
    std::cin.ignore(); // Pour ignorer le caractère de nouvelle ligne restant

    for (int i = 0; i < nombreEtudiants; ++i) {
        std::string nom, adresse, classe, dateNaissance;
        int numeroIdentite;

        std::cout << "Entrez les informations pour l'étudiant " << i + 1 << ":\n";
        std::cout << "Nom: ";
        std::getline(std::cin, nom);
        std::cout << "Adresse: ";
        std::getline(std::cin, adresse);
        std::cout << "Classe: ";
        std::getline(std::cin, classe);
        std::cout << "Date de Naissance (jj/mm/aaaa): ";
        std::getline(std::cin, dateNaissance);
        std::cout << "Numéro d'Identité: ";
        std::cin >> numeroIdentite;
        std::cin.ignore(); // Pour ignorer le caractère de nouvelle ligne restant

        Etudiant etudiant(nom, adresse, classe, dateNaissance, numeroIdentite);
        ecole.ajouterEtudiant(etudiant);
    }

    std::cout << "\nTous les étudiants:" << std::endl;
    ecole.afficherEtudiants();

    std::cout << "\nRecherche de l'étudiant avec le numéro d'identité 2:" << std::endl;
    Etudiant* etudiantRecherche = ecole.rechercherEtudiant(2);
    if (etudiantRecherche) {
        etudiantRecherche->afficher();
    } else {
        std::cout << "Étudiant non trouvé." << std::endl;
    }

    std::cout << "\nSuppression de l'étudiant avec le numéro d'identité 2." << std::endl;
    ecole.supprimerEtudiant(2);

    std::cout << "\nTous les étudiants après suppression:" << std::endl;
    ecole.afficherEtudiants();

    std::cout << "\nÉtudiants de la Classe 1:" << std::endl;
    ecole.afficherEtudiantsParClasse("Classe 1");

    return 0;
}