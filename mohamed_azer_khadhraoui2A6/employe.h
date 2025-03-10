#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
#include <string>

class employe
{
    private :
        std::string id;
       float salaire;
       float taux;

    public : 
        employe();
        employe(std::string id, float salaire,float taux);
       
        void setId(std::string id);
        void setsalaire(float salaire);
        void settaux(float taux);
       
        std::string getId();
        float getsalaire();
        float gettaux();
        
};
#endif