#include "functions.h"

int main() {
    Etudiant etudiant;
    Etudiant etudiant2;
    int i = 0;
    
    etudiant.saisir();
    etudiant.ajouter_note();
    etudiant.afficher();
    etudiant2.saisir();
    etudiant2.ajouter_note();
    etudiant2.afficher();

    std::cout << "La moyenne de l'étudiant est : " << etudiant.moyenne() << std::endl;
    if (etudiant.admis()) {
        std::cout << "L'étudiant est admis." << std::endl;
    } else {
        std::cout << "L'étudiant n'est pas admis." << std::endl;
    }
    i=etudiant.exae_quo(etudiant2);
    if (i==1) {
        std::cout << "Les deux étudiants ont la même moyenne." << std::endl;
    } else {
        std::cout << "Les deux étudiants n'ont pas la même moyenne." << std::endl;
    }


    return 0;
}
