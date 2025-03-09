#include "produit.h"
#include "proepi.h"



proepicerie::proepicerie(int id, std::string nom, std::string libelle, float prix, int quantite, double poids) {
   
    this->setId(id);
    this->setNom(nom);
    this->setLibelle(libelle);
    this->setPrix(prix);
    this->setQuantite(quantite);
    this->setPoids(poids);
}

void proepicerie::setPoids(double poids){
    this->poids = poids;
}   
double proepicerie::getPoids(){
    return this->poids;
}


