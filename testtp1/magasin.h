
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
        ~magasin();
        void setNom(std::string nom);
        std::string getNom();
        
    };