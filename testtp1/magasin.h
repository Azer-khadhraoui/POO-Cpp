#ifndef MAGASIN_H
#define MAGASIN_H
#include <iostream>
#include <vector>
#include <string>
#include "proepi.h"
class magasin
{
    private:
    
        std::string nom;
        std::vector<proepicerie> proepiceries;




    public:
        magasin();
        magasin(std::string nom);
        
        void setNom(std::string nom);
        std::string getNom();
        bool ajouterProduit(proepicerie& proepicerie);
        void afficherProduits();
        void supprimerProduit();
        float prixTotal();
        
    };

#endif