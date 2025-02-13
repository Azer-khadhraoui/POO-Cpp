#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    std::vector<float> tab_notes; // Stocke les notes de l'étudiant

public:
    Etudiant();  // Constructeur
    void saisir();
    void afficher() const;
    void ajouter_note();
    float moyenne() const;
    bool admis() ;
    int exae_quo(Etudiant E);
};

#endif // FUNCTIONS_H
