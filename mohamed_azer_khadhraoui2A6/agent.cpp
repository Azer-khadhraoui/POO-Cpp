
#include <iostream>
#include <string>
#include <vector>
#include "employe.h"
#include "agent.h"


agent::agent(){
    prime = 0;
    
}
agent::agent(std::string id, float salaire,float taux,int prime) : employe(id, salaire,taux){
    this->prime = prime;
    
}

void agent::setprime(int prime){
    this->prime = prime;
}

int agent::getprime(){
    return prime;
}
