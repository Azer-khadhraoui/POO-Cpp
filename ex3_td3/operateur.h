#include <iostream>
using namespace std;
#include <string.h>
#include <string>

class abonne {
private:
    int num;
    int cin;
    double solde;
    std::string prenom;
    std::string nom;

public:
    int getnum();
    int getcin();
    double getsolde();
    std::string getprenom();
    std::string getnom();

    void setnum(int n);
    void setcin(int c);
    void setsolde(double s);
    void setprenom(const std::string& p);
    void setnom(const std::string& n);

    void saisir();
    void afficher();
    void recharger(double x);
    bool consommer(int seconde, double prix);
};