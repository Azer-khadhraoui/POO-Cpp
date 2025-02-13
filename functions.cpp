#include "functions.h"

void Etudiant::saisir() {
    std::cout << "Entrez le nom de l'étudiant : ";
    std::cin >> nom;
    std::cout << "Entrez le prénom de l'étudiant : ";
    std::cin >> prenom;
}

void Etudiant::afficher() const {
    std::cout << "Nom : " << nom << "\nPrénom : " << prenom << std::endl;
}
