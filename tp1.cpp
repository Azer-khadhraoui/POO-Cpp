#include "td1.h"
#include <iostream>
#include <string>

using namespace std;

string nom;
string prenom;

void saisir()
{
    cout << "donner votre nom" << endl;
    cin >> nom;
    cout << "donner votre prenom" << endl;
    cin >> prenom;
}

void afficher()
{
    cout << "nom : " << nom << endl;
    cout << "prenom : " << prenom << endl;
}