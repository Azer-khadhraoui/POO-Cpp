#include <iostream>
#include <string>
#include <vector>
#include "employe.h"
#include "agent.h"
#include "entreprise.h"

entreprise::entreprise(){
    nom = "";
    agents = {};
}
entreprise::entreprise(std::string nom,std::vector<agent> agents){
    this->nom = nom;
    this->agents = agents;
}

bool entreprise::ajouteragent(agent& agent1){
    
    for (int i = 0; i < agents.size(); i++){
        if (agents[i].getId() == agent1.getId()){
            std::cout << "Erreur : L'identifiant  existe déjà " << std::endl;
            return false;
        }
    }
    
        agents.push_back(agent1);
        return true;
    
   
}

void entreprise::afficheragent(){
    for (int i = 0; i < agents.size(); i++){
        std::cout << "ID : " << agents[i].getId() << std::endl;
        std::cout << "salaire : " << agents[i].getsalaire() << std::endl;
        std::cout << "prime : " << agents[i].getprime() << std::endl;
        std::cout << "******************** " << std::endl;
      
       
    }
}
float entreprise::chargetotal(){
    float charge=0;
    for (int i = 0; i < agents.size(); i++){
       
           
        charge += (agents[i].getsalaire() + agents[i].getprime())*(1-agents[i].gettaux());  
        
    

    
}
return charge;
}