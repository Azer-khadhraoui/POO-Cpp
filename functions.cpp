#include "functions.h"

Etudiant::Etudiant() : tab_notes(4, 0.0) {} // Initialise 4 notes à 0

void Etudiant::saisir() {
    std::cout << "Entrez le nom de l'étudiant : ";
    std::cin >> nom;
    std::cout << "Entrez le prénom de l'étudiant : ";
    std::cin >> prenom;
}

void Etudiant::afficher() const {
    std::cout << "Nom : " << nom << "\nPrénom : " << prenom << std::endl;
    std::cout << "Notes : ";
    for (float note : tab_notes) {
        std::cout << note << " ";
    }
    std::cout << std::endl;
}

void Etudiant::ajouter_note() {
    std::cout << "Entrez les 4 notes de l'étudiant : " << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "Note " << i + 1 << " : ";
        std::cin >> tab_notes[i];
    }
}

float Etudiant::moyenne() const {
    float somme = 0;
    for (float note : tab_notes) {
        somme += note;
    }
    return somme / tab_notes.size();
}
bool Etudiant::admis() {
    return moyenne() >= 10;
}
int Etudiant::exae_quo(Etudiant E) {
    if (moyenne() == E.moyenne()) {
        return 1;
    } else {
        return 0;
    }
}
