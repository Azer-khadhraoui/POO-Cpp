#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>
#include <string>

class Compte {
protected:
    std::string rib;
    double solde;
    double soldeMin;

public:
    Compte(const std::string& _rib, double _solde, double _soldeMin);
    virtual ~Compte();
    
    std::string getRib() const;
    double getSolde() const;
    double getSoldeMin() const;
    
    virtual void deposer(double montant);
    virtual bool retirer(double montant);
    virtual void afficher() const = 0; // Méthode virtuelle pure
    
    virtual Compte& operator=(const Compte& autre);
};

#endif // COMPTE_H