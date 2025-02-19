#include "operateur.h"
#include <iostream>

int main() {
    abonne a;
    int x;
    int seconde;
    double prix;

    

    
    a.saisir();

    
    a.afficher();

    cout<<"Donner le montant a recharger: ";
    cin>>x;
    a.recharger(x);

    cout<<"Donner le nombre de seconde: ";
    cin>>seconde;
    cout<<"Donner le prix par seconde: ";
    cin>>prix;
    if(a.consommer(seconde,prix)){
        cout<<"La consommation est effectuee"<<endl;}
        a.afficher();

    return 0;
}