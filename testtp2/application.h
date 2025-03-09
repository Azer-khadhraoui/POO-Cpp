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
        void ajouterlogementin();
        void afficherlogementin();
        int prixtotal();
};

#endif