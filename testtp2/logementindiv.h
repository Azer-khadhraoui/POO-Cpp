#ifndef LOGEMENTINDIV_H
#define LOGEMENTINDIV_H
#include <iostream>
#include <string>
#include "logement.h"

class logementindiv : public logement
{
    private :
        int nbpieces;
        bool  piscine;
    public :
        logementindiv();
        logementindiv(std::string id, std::string proprietaire, std::string adresse, int surface, int prix, int nbpieces, bool piscine);
        void getnbpieces();
        void setnbpieces(int nbpieces);
        void getpiscine();
        void setpiscine(bool piscine);
};

#endif