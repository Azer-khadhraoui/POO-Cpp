#ifndef COMPTE_EPARGNE_H
#define COMPTE_EPARGNE_H

#include "Compte.h"

class CompteEpargne : public Compte {
private:
    double tauxInteret; // en pourcentage

public:
    CompteEpargne(const std::string& rib, double solde = 0.0, double taux = 2.5);
    virtual ~CompteEpargne();
    
    double getTauxInteret() const;
    void setTauxInteret(double taux);
    
    double calculerInteret() const;
    void ajouterInteret();
    
    virtual void afficher() const override;
    
    CompteEpargne& operator=(const CompteEpargne& autre);
};

#endif // COMPTE_EPARGNE_H