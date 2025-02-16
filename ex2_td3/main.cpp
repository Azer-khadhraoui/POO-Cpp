#include <iostream>
#include "banque.h"
#include "bnq.h"

int main() {
    
    banque b;

    int nombreComptes;
    std::cout << "Combien de comptes voulez-vous ajouter ? ";
    std::cin >> nombreComptes;

    for (int i = 0; i < nombreComptes; ++i) {
        Compte comp;
        std::cout << "Saisie des informations pour le compte " << i + 1 << " :" << std::endl;
        comp.saisir();
        comp.afficher();

        int index;
        b.ajoutCompte(comp, &index);
        std::cout << "Compte ajouté à l'index: " << index << std::endl;
    }

    
    std::cout << "Tous les comptes dans la banque :" << std::endl;
    std::vector<Compte> comptes = b.getComptes();
    for (const auto& compte : comptes) {
        compte.afficher();
    }

    return 0;
}