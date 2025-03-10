
#include <iostream>
#include <vector>
#include <string>
#include "agent.h"
#include "employe.h"
#include "entreprise.h"

int main() {

    char continuer;
    entreprise entreprise1;
    std::string id;
    float salairenet;
  
   

    do {
        std::string id;
        float salaire;
        int prime;
        float taux;
        
        std::cout << "Entrez l'ID : ";
        std::cin >> id;
        std::cout << "Entrez la salaire : ";
        std::cin >> salaire;
        while (taux>1 || taux<0){
            std::cout << "Entrez le taux : ";
        std::cin >> taux;

        }
        
        std::cout << "Entrez la prime : ";
        std::cin >> prime;
        
        agent agent1(id, salaire,taux, prime);
        entreprise1.ajouteragent(agent1);
        
        std::cout << "Voulez-vous ajouter un autre logement ? (o/n) : ";
        std::cin >> continuer;
        
    } while (continuer == 'o' || continuer == 'O');
    entreprise1.afficheragent();

 salairenet=entreprise1.chargetotal();
 std::cout << "salairenet: " << salairenet << std::endl;
    

    

    


    return 0;
}