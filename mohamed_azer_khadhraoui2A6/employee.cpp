
#include <iostream>
#include <string>
#include <vector>
#include "employe.h"

employe::employe(){
    id = "";
    salaire=0;
}
employe::employe(std::string id,float salaire,float taux){
    this->id = id;
    this->salaire = salaire;
    this->taux =taux;
    
}
void  employe::setId(std::string id){
    this->id = id;
}
void employe::setsalaire(float salaire){
    this->salaire = salaire;
}
void employe::settaux(float taux){
    this->taux = taux;
}
std::string employe::getId(){
    return id;
}
float employe:: getsalaire(){
    return salaire;
}
float employe:: gettaux(){
    return taux;
}