#include <iostream>
#include <string>
#include <vector>
#include "logement.h"
#include "logementindiv.h"
#include "application.h"

application::application(){
    logementindivs = {};
}
application::application(std::vector<logementindiv> logementindivs){
    this->logementindivs = logementindivs;
}

bool application::ajouterlogementin(logementindiv& logementindiv1){
    
    for (int i = 0; i < logementindivs.size(); i++){
        if (logementindivs[i].getId() == logementindiv1.getId()){
            std::cout << "Erreur : L'identifiant  existe déjà !" << std::endl;
            return false;
        }
    }
    
        logementindivs.push_back(logementindiv1);
        return true;
    
   
}

void application::afficherlogementin(){
    for (int i = 0; i < logementindivs.size(); i++){
        std::cout << "ID : " << logementindivs[i].getId() << std::endl;
        std::cout << "Proprietaire : " << logementindivs[i].getProprietaire() << std::endl;
        std::cout << "Adresse : " << logementindivs[i].getAdresse() << std::endl;
        std::cout << "Surface : " << logementindivs[i].getSurface() << std::endl;
        std::cout << "Prix : " << logementindivs[i].getPrix() << std::endl;
        logementindivs[i].getnbpieces();
        logementindivs[i].getpiscine();
    }
}
int application::prixtotal(std::string id){
    for (int i = 0; i < logementindivs.size(); i++){
        if (logementindivs[i].getId() == id){
            if (logementindivs[i].getpiscine() == true){
                return logementindivs[i].getPrix() *30/100 + logementindivs[i].getPrix();   
        }
    }

    
}
return 0;
}