#include "proepi.h"
#include "produit.h"
#include "magasin.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<proepicerie> proepiceries;
    char continuer;
    magasin magasin;
    float x;

   

    do {
        std::string nom;
        std::string libelle;
        float prix;
        int quantite;
        double poids;
        int id;
        std::cout << "Entrez l'ID du produit: ";
        std::cin >> id;
        std::cout << "Entrez le nom du produit: ";
        std::cin >> nom;
        std::cout << "Entrez le libelle du produit: ";
        std::cin >> libelle;
        std::cout << "Entrez le prix du produit: ";
        std::cin >> prix;
        std::cout << "Entrez la quantite du produit: ";
        std::cin >> quantite;
        std::cout << "Entrez le poids du produit: ";
        std::cin >> poids;
        proepicerie proepicerie(id, nom, libelle, prix, quantite, poids);
       
       magasin.ajouterProduit(proepicerie);
        std::cout << "Voulez-vous ajouter un autre produit? (o/n) ";
        std::cin >> continuer;
        
    } while (continuer == 'o' || continuer == 'O');
    magasin.afficherProduits();
    

    magasin.supprimerProduit();
    
    x= magasin.prixTotal();
    std::cout << "Le prix total est de: " << x << std::endl;

    magasin.afficherProduits();

    

    


    return 0;
}
