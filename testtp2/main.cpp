
#include <iostream>
#include <vector>
#include <string>
#include "logement.h"
#include "logementindiv.h"
#include "application.h"

int main() {

    char continuer;
    application app;
    std::string id;
  
   

    do {
        std::string id;
        std::string proprietaire;
        std::string adresse;
        int surface;
        int prix;
        int nbpieces;
        bool piscine;
        std::cout << "Entrez l'ID du logement : ";
        std::cin >> id;
        std::cout << "Entrez le proprietaire du logement : ";
        std::cin >> proprietaire;
        std::cout << "Entrez l'adresse du logement : ";
        std::cin >> adresse;
        std::cout << "Entrez la surface du logement : ";
        std::cin >> surface;
        std::cout << "Entrez le prix du logement : ";
        std::cin >> prix;
        std::cout << "Entrez le nombre de pieces du logement : ";
        std::cin >> nbpieces;
        std::cout << "Le logement a-t-il une piscine ? (1 pour oui, 0 pour non) : ";
        std::cin >> piscine;
        logementindiv logementindiv1(id, proprietaire, adresse, surface, prix, nbpieces, piscine);
        app.ajouterlogementin(logementindiv1);
        
        std::cout << "Voulez-vous ajouter un autre logement ? (o/n) : ";
        std::cin >> continuer;
        
    } while (continuer == 'o' || continuer == 'O');
    app.afficherlogementin();
    std::cout << "Entrez l'ID du logement pour lequel vous voulez calculer le prix total : ";
    std::cin >> id;
    std::cout << "Le prix total est de : " << app.prixtotal(id) << std::endl;
    

    

    


    return 0;
}