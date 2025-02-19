#include "operateur.h"
#include <string.h>
#include <iostream>
using namespace std;

int abonne::getnum(){
    return num;
}
int abonne::getcin(){
    return cin;
}
double abonne::getsolde(){
    return solde;
}
std::string abonne::getprenom(){
    return prenom;
}
std::string abonne::getnom(){
    return nom;
}

void abonne::setnum(int n){
    num = n;
}
void abonne::setcin(int c){
    cin = c;
}
void abonne::setsolde(double s){
    solde = s;
}
void abonne::setprenom(const std::string& p){
    prenom = p;
}
void abonne::setnom(const std::string& n){
    nom = n;
}
void abonne::saisir(){
    std::cout<<"Donner le prenom de l'abonne: ";
    std::cin>>prenom;
    std::cout<<"Donner le nom de l'abonne: ";
    std::cin>>nom;
    std::cout<<"Donner le numero de l'abonne: ";
    std::cin>>num;
    std::cout<<"Donner le CIN de l'abonne: ";
    std::cin>>cin;
    std::cout<<"Donner le solde de l'abonne: ";
    std::cin>>solde;
   

}
void abonne::afficher(){
    std::cout<<"Le prenom de l'abonne est: "<<prenom<<std::endl;
    std::cout<<"Le nom de l'abonne est: "<<nom<<std::endl;
    std::cout<<"Le numero de l'abonne est: "<<num<<std::endl;
    std::cout<<"Le CIN de l'abonne est: "<<cin<<std::endl;
    std::cout<<"Le solde de l'abonne est: "<<solde<<std::endl;
}

void abonne::recharger(double x){
    solde=solde+x;
    std::cout<<"Le solde de l'abonne est: "<<solde<<std::endl;
}
bool abonne::consommer(int seconde, double prix){
    double facture=seconde*prix;
    if(facture>solde){
        std::cout<<"Solde insuffisant"<<std::endl;
        return false;
    }
    else{
        solde=solde-facture;
        std::cout<<"Le solde de l'abonne est: "<<solde<<std::endl;
        return true;
    }
    
}