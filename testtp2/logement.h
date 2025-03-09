#ifndef LOGEMENT_H
#define LOGEMENT_H
#include <iostream>
#include <string>

class logement
{
    private :
        std::string id;
        std::string proprietaire;
        std::string adresse;
        int surface;
        int prix;
    public : 
        logement();
        logement(std::string id, std::string proprietaire, std::string adresse, int surface, int prix);
        void afficher();
        void saisir();
        void setId(std::string id);
        void setProprietaire(std::string proprietaire);
        void setAdresse(std::string adresse);
        void setSurface(int surface);
        void setPrix(int prix);
        std::string getId();
        std::string getProprietaire();
        std::string getAdresse();
        int getSurface();
        int getPrix();
};
#endif