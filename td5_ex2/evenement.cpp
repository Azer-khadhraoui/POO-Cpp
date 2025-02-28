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