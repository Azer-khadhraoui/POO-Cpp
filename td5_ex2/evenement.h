#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <string>
#include <vector>


class Evenement {

private:
    std::string date;
    std::string lieu;
    std::string type;
    std::string nom;
    std::vector<Evenement> evenements;

public:
    Evenement();
    Evenement(std::string date, std::string lieu, std::string type, std::string nom);

    std::string getDate() const;
    std::string getLieu() const;
    std::string getType() const;
    std::string getNom() const;
    std::vector<Evenement> getEvenements();

    void setDate(const std::string& date);
    void setLieu(const std::string& lieu);
    void setType(const std::string& type);
    void setNom(const std::string& nom);
    void setEvenements(const std::vector<Evenement>& evenements);

    void ajouter(Evenement& e1);
    void afficher() const;
    Evenement* rechercher(std::string nom, std::vector<Evenement>& tableauEvenements);
    void supprimer(std::string nom, std::vector<Evenement>& tableauEvenements);
};

#endif // EVENEMENT_H