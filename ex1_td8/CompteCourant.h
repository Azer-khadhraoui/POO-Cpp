#ifndef COMPTE_COURANT_H
#define COMPTE_COURANT_H

#include "Compte.h"

class CompteCourant : public Compte {
public:
    CompteCourant(const std::string& rib, double solde = 0.0);
    virtual ~CompteCourant();
    
    virtual void afficher() const override;
    
    CompteCourant& operator=(const CompteCourant& autre);
};

#endif // COMPTE_COURANT_H