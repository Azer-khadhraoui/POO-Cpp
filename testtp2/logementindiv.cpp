#include <iostream>
#include <string>
#include <vector>
#include "logement.h"
#include "logementindiv.h"


logementindiv::logementindiv(){
    nbpieces = 0;
    piscine = false;
}
logementindiv::logementindiv(std::string id, std::string proprietaire, std::string adresse, int surface, int prix, int nbpieces, bool piscine) : logement(id, proprietaire, adresse, surface, prix){
    this->nbpieces = nbpieces;
    this->piscine = piscine;
}

void logementindiv::setnbpieces(int nbpieces){
    this->nbpieces = nbpieces;
}
void logementindiv::setpiscine(bool piscine){
    this->piscine = piscine;
}
void logementindiv::getnbpieces(){
    std::cout << "Nombre de pieces : " << nbpieces << std::endl;
}
int logementindiv::getpiscine(){
    if(piscine){
        
        return 1;
    }
    else{
        
        return 0;
    }
     
}