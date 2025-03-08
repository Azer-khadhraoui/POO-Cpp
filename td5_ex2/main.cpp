#include "evenement.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Evenement> evenements;
    std::string date, lieu, type, nom, nomch,nomsupp,an,nommodif;
    char continuer;

    do {
        std::cout << "Entrez la date de l'évènement (YYYY-MM-DD) : ";
        std::cin >> date;
        std::cout << "Entrez le lieu de l'évènement : ";
        std::cin >> lieu;
        std::cout << "Entrez le type de l'évènement : ";
        std::cin >> type;
        std::cout << "Entrez le nom de l'évènement : ";
        std::cin >> nom;

        Evenement e(date, lieu, type, nom);
        evenements.push_back(e);

        std::cout << "Voulez-vous ajouter un autre évènement ? (o/n) : ";
        std::cin >> continuer;
    } while (continuer == 'o' || continuer == 'O');

    // Affichage des évènements
    std::cout << "Evènements ajoutés :" << std::endl;
    for (Evenement& e : evenements) {
        e.afficher();
        std::cout << std::endl;
    }

    std::cout << "Entrez le nom de l'évènement a chercher : ";
    std::cin >> nomch;


   
    Evenement temp,tempsupp;
    Evenement* e = temp.rechercher(nomch, evenements);
    
    if (e != nullptr) {
        std::cout << "Evènement trouvé :" << std::endl;
        e->afficher();
    } else {
        std::cout << "Evènement non trouvé." << std::endl;
    }
    /*std::cout << "Entrez le nom de l'évènement a supprimer : ";
    std::cin >> nomsupp;
    tempsupp.supprimer(nomsupp, evenements);*/

    std::cout << "Entrez l annee : ";
    std::cin >> an;
    temp.afficherEvenements(evenements,an);

    std::cout << "Entrez le nom de l'évènement a modifier : ";
    std::cin >> nommodif;
    temp.modifier(nommodif, evenements);
    for (Evenement& e : evenements) {
        e.afficher();
        std::cout << std::endl;
    }



    return 0;
}
