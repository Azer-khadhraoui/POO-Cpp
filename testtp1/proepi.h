#ifndef PROEPI_H
#define PROEPI_H

#include "produit.h"
class proepicerie: public produit{
    private:
        double poids;
    public:
        proepicerie();
        proepicerie(int id, std::string nom, std::string libelle, float prix, int quantite, double poids);
        void setPoids(double poids);
        double getPoids();
        
       

};
#endif
    