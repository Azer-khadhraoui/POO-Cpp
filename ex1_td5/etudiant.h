#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string adresse;
    std::string classe;
    std::string dateNaissance;
    int numeroIdentite;

public:
    Etudiant(std::string nom, std::string adresse, std::string classe, std::string dateNaissance, int numeroIdentite);
    std::string getNom() const;
    std::string getAdresse() const;
    std::string getClasse() const;
    std::string getDateNaissance() const;
    int getNumeroIdentite() const;
    void afficher() const;
};

#endif // ETUDIANT_H