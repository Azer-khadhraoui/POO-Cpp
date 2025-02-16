#ifndef BANQUE_H
#define BANQUE_H

#include <string>

class Compte {
private:
    int numCompte;
    std::string nomProprietaire;
    double solde;

public:
    // Constructeur
    Compte();
    Compte(int num, const std::string& nom, double sol);

    // Getters
    int getNumCompte() const;
    std::string getNomProprietaire() const;
    double getSolde() const;

    // Setters
    void setNumCompte(int num);
    void setNomProprietaire(const std::string& nom);
    void setSolde(double sol);

    
    void saisir();
    void afficher() const;
};

#endif // BANQUE_H