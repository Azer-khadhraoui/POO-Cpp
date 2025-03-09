#include "produit.h"


produit::produit() {
    
    this->id = 0;
    this->nom = "";
    this->libelle = "";
    this->prix = 0.0f;
    this->quantite = 0;
}


produit::produit(int id, std::string nom, std::string libelle, float prix, int quantite) {
    this->id = id;
    this->nom = nom;
    this->libelle = libelle;
    this->prix = prix;
    this->quantite = quantite;
}

void produit::setId(int id){
    this->id = id;
}
int produit::getId(){
    return this->id;
}
void produit::setNom(std::string nom){
    this->nom = nom;
}
std::string produit::getNom(){
    return this->nom;
}
void produit::setLibelle(std::string libelle){
    this->libelle = libelle;
}
std::string produit::getLibelle(){
    return this->libelle;
}
void produit::setPrix(float prix){
    this->prix = prix;
}
float produit::getPrix(){
    return this->prix;
}
void produit::setQuantite(int quantite){
    this->quantite = quantite;
}
int produit::getQuantite(){
    return this->quantite;
}