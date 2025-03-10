#ifndef AGENT_H
#define AGENT_H
#include <iostream>
#include <string>
#include "employe.h"

class agent : public employe
{
    private :
        int prime;
        
    public :
        agent();
        agent(std::string id,float salaire,float taux,int prime);
        int getprime();
        void setprime(int prime);
        
        
};

#endif