#include "evenement.h"
#include <vector>
#include <string>
#include <iostream>

// Constructeurs
Evenement::Evenement() : date(""), lieu(""), type(""), nom("") {}

Evenement::Evenement(std::string date, std::string lieu, std::string type, std::string nom)
    : date(date), lieu(lieu), type(type), nom(nom) {}

// Getters
std::string Evenement::getDate() const {
    return date;
}

std::string Evenement::getLieu() const {
    return lieu;
}

std::string Evenement::getType() const {
    return type;
}

std::string Evenement::getNom() const {
    return nom;
}
std::vector<Evenement> Evenement::getEvenements() {
    return evenements;
}   

// Setters
void Evenement::setDate(const std::string& date) {
    this->date = date;
}

void Evenement::setLieu(const std::string& lieu) {
    this->lieu = lieu;
}

void Evenement::setType(const std::string& type) {
    this->type = type;
}

void Evenement::setNom(const std::string& nom) {
    this->nom = nom;
}
void Evenement::setEvenements(const std::vector<Evenement>& evenements) {
    this->evenements = evenements;
}
void Evenement::ajouter(Evenement& e1) {
    
    evenements.push_back(e1);
    }

void Evenement::afficher() const {
    std::cout << "Date: " << date << std::endl;
    std::cout << "Lieu: " << lieu << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Nom: " << nom << std::endl;
}



Evenement* Evenement::rechercher(std::string nom, std::vector<Evenement>& tableauEvenements) {
    for (Evenement& e : tableauEvenements) {
        if (e.getNom() == nom) {
            return &e;
        }
    }
    return nullptr;
}

void Evenement::supprimer(std::string nom, std::vector<Evenement>& tableauEvenements) {
    for (auto it = tableauEvenements.begin(); it != tableauEvenements.end(); ++it) {
        if (it->getNom() == nom) {
            tableauEvenements.erase(it);
            break;
        }
    }
}
void Evenement::afficherEvenements(std::vector<Evenement>& tableauEvenements, std::string annee) const {
    for (Evenement& e : tableauEvenements) {
        if (e.getDate()==annee) {
            e.afficher();
        }
    }
}
void Evenement::modifier(std::string nom, std::vector<Evenement>& tableauEvenements) {
    for (Evenement& e : tableauEvenements) {
        if (e.getNom() == nom) {
            std::string date, lieu, type, nom;
            std::cout << "Entrez la date de l'évènement (YYYY-MM-DD) : ";
            std::cin >> date;
            std::cout << "Entrez le lieu de l'évènement : ";
            std::cin >> lieu;
            std::cout << "Entrez le type de l'évènement : ";
            std::cin >> type;
            std::cout << "Entrez le nom de l'évènement : ";
            std::cin >> nom;

            e.setDate(date);
            e.setLieu(lieu);
            e.setType(type);
            e.setNom(nom);
        }
    }
}


