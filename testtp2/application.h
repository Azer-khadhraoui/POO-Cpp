#ifndef APPLICATION_H
#define APPLICATION_H
#include <iostream>
#include <string>
#include <vector>
#include "logement.h"
#include "logementindiv.h"

class application
{
    private :
        std::vector<logementindiv> logementindivs;
        
    public :
        application();
        application(std::vector<logementindiv> logementindivs);
        bool ajouterlogementin(logementindiv& logementindiv1);
        void afficherlogementin();
        int prixtotal(std::string id);
};

#endif