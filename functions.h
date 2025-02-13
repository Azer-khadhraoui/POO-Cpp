#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

class Etudiant {
private:
    std::string nom;
    std::string prenom;

public:
    void saisir();
    void afficher() const;
};

#endif // FUNCTIONS_H
