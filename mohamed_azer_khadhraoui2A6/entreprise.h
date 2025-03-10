#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#include <iostream>
#include <string>
#include <vector>
#include "employe.h"
#include "agent.h"

class entreprise
{
    private :
        std::string nom;
        std::vector<agent> agents;
        
    public :
        entreprise();
        entreprise(std::string nom,std::vector<agent> agents);
        bool ajouteragent(agent& agents);
        void afficheragent();
        float chargetotal();
};
#endif