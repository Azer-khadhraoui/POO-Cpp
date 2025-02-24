#ifndef OUVRAGE_H
#define OUVRAGE_H

#include <string>

class Ouvrage {
private:
    int code;
    std::string titre;
    int nombreExemplaires;
    double prixUnitaire;

public:
   
    Ouvrage();

    
    Ouvrage(int c, const std::string& t, int n, double p);

    
    int getCode() const;
    void setCode(int c);

    std::string getTitre() const;
    void setTitre(const std::string& t);

    int getNombreExemplaires() const;
    void setNombreExemplaires(int n);

    double getPrixUnitaire() const;
    void setPrixUnitaire(double p);

    
    void afficher() const;

    
    double totalOuvrage() const;
};

#endif // OUVRAGE_H