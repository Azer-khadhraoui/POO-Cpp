#include <iostream>
#include <string>
#include <vector>
#include "logement.h"


logement::logement(){
    id = "";
    proprietaire = "";
    adresse = "";
    surface = 0;
    prix = 0;
}
logement::logement(std::string id, std::string proprietaire, std::string adresse, int surface, int prix){
    this->id = id;
    this->proprietaire = proprietaire;
    this->adresse = adresse;
    this->surface = surface;
    this->prix = prix;
}

void logement::setProprietaire(std::string proprietaire){
    this->proprietaire = proprietaire;
}
void logement::setAdresse(std::string adresse){
    this->adresse = adresse;
}
void logement::setSurface(int surface){
    this->surface = surface;
}
void logement::setPrix(int prix){
    this->prix = prix;
}
std::string logement::getId(){
    return id;
}
std::string logement:: getProprietaire(){
    return proprietaire;
}
std::string logement::getAdresse(){
    return adresse;
}
int logement::getSurface(){
    return surface;
}
int logement::getPrix(){
    return prix;
}
