#include "Ecole.h"
#include "etudiant.h"
#include <iostream>

int main() {
    Ecole ecole;

    Etudiant etudiant1("Azer", "123 Rue A", "Classe 1", "01/01/2000", 1);
    Etudiant etudiant2("aaaa", "456 Rue B", "Classe 2", "02/02/2001", 2);
    Etudiant etudiant3("Chaaaaaaae", "789 Rue C", "Classe 1", "03/03/2002", 3);

    ecole.ajouterEtudiant(etudiant1);
    ecole.ajouterEtudiant(etudiant2);
    ecole.ajouterEtudiant(etudiant3);

    std::cout << "Tous les étudiants:" << std::endl;
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