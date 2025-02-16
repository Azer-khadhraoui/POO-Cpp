#include <iostream>
#include "banque.h"

int main() {
    
    Compte compte1(12345, "azer kh", 1000.0);

    
    std::cout << "Numéro de compte: " << compte1.getNumCompte() << std::endl;
    std::cout << "Nom du propriétaire: " << compte1.getNomProprietaire() << std::endl;
    std::cout << "Solde: " << compte1.getSolde() << std::endl;



    return 0;
}