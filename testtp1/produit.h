#ifndef PRODUIT_H
#define PRODUIT_H
#include <string>
#include <iostream>

class produit
{
        std::string nom;
        int id;
        std::string libelle;
        float prix;
        int quantite;

    public:
        produit();
        produit(int id, std::string nom, std::string libelle, float prix, int quantite);
        
        void setId(int id);
        int getId();
        void setNom(std::string nom);
        std::string getNom();
        void setLibelle(std::string libelle);
        std::string getLibelle();
        void setPrix(float prix);
        float getPrix();
        void setQuantite(int quantite);
        int getQuantite();
        


};

      #endif 