#include <iostream>
#include <string>
#include <limits>
#include "Banque.h"
#include "Compte.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"

void afficherMenu() {
    std::cout << "\n===== GESTION BANCAIRE =====\n";
    std::cout << "1. Créer un compte courant\n";
    std::cout << "2. Créer un compte épargne\n";
    std::cout << "3. Déposer de l'argent\n";
    std::cout << "4. Retirer de l'argent\n";
    std::cout << "5. Calculer et ajouter les intérêts (compte épargne)\n";
    std::cout << "6. Afficher les détails d'un compte\n";
    std::cout << "7. Afficher tous les comptes\n";
    std::cout << "0. Quitter\n";
    std::cout << "Votre choix : ";
}

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    // Création de la banque
    std::string nomBanque, lieuBanque;
    
    std::cout << "Entrez le nom de la banque : ";
    std::getline(std::cin, nomBanque);
    
    std::cout << "Entrez le lieu de la banque : ";
    std::getline(std::cin, lieuBanque);
    
    Banque banque(nomBanque, lieuBanque);
    
    int choix;
    std::string rib;
    double montant, taux;
    
    do {
        afficherMenu();
        std::cin >> choix;
        clearInputBuffer();
        
        switch (choix) {
            case 1: { // Créer compte courant
                std::cout << "RIB du compte courant : ";
                std::getline(std::cin, rib);
                
                std::cout << "Solde initial : ";
                std::cin >> montant;
                clearInputBuffer();
                
                banque.ajouterCompteCourant(rib, montant);
                std::cout << "Compte courant créé avec succès." << std::endl;
                break;
            }
            case 2: { // Créer compte épargne
                std::cout << "RIB du compte épargne : ";
                std::getline(std::cin, rib);
                
                std::cout << "Solde initial : ";
                std::cin >> montant;
                
                std::cout << "Taux d'intérêt (%) : ";
                std::cin >> taux;
                clearInputBuffer();
                
                banque.ajouterCompteEpargne(rib, montant, taux);
                std::cout << "Compte épargne créé avec succès." << std::endl;
                break;
            }
            case 3: { // Déposer
                std::cout << "RIB du compte : ";
                std::getline(std::cin, rib);
                
                Compte* compte = banque.rechercherCompte(rib);
                if (!compte) {
                    std::cout << "Compte introuvable !" << std::endl;
                    break;
                }
                
                std::cout << "Montant à déposer : ";
                std::cin >> montant;
                clearInputBuffer();
                
                compte->deposer(montant);
                std::cout << "Dépôt effectué. Nouveau solde : " << compte->getSolde() << " DT" << std::endl;
                break;
            }
            case 4: { // Retirer
                std::cout << "RIB du compte : ";
                std::getline(std::cin, rib);
                
                Compte* compte = banque.rechercherCompte(rib);
                if (!compte) {
                    std::cout << "Compte introuvable !" << std::endl;
                    break;
                }
                
                std::cout << "Montant à retirer : ";
                std::cin >> montant;
                clearInputBuffer();
                
                if (compte->retirer(montant)) {
                    std::cout << "Retrait effectué. Nouveau solde : " << compte->getSolde() << " DT" << std::endl;
                } else {
                    std::cout << "Retrait impossible. Solde insuffisant." << std::endl;
                }
                break;
            }
            case 5: { // Ajouter intérêts
                std::cout << "RIB du compte épargne : ";
                std::getline(std::cin, rib);
                
                Compte* compte = banque.rechercherCompte(rib);
                if (!compte) {
                    std::cout << "Compte introuvable !" << std::endl;
                    break;
                }
                
                CompteEpargne* compteEpargne = dynamic_cast<CompteEpargne*>(compte);
                if (!compteEpargne) {
                    std::cout << "Ce n'est pas un compte épargne !" << std::endl;
                    break;
                }
                
                double interet = compteEpargne->calculerInteret();
                std::cout << "Intérêts calculés : " << interet << " DT" << std::endl;
                
                compteEpargne->ajouterInteret();
                std::cout << "Intérêts ajoutés. Nouveau solde : " << compteEpargne->getSolde() << " DT" << std::endl;
                break;
            }
            case 6: { // Afficher un compte
                std::cout << "RIB du compte : ";
                std::getline(std::cin, rib);
                
                Compte* compte = banque.rechercherCompte(rib);
                if (!compte) {
                    std::cout << "Compte introuvable !" << std::endl;
                    break;
                }
                
                compte->afficher();
                break;
            }
            case 7: { // Afficher tous les comptes
                banque.afficherComptes();
                break;
            }
            case 0: {
                std::cout << "Au revoir !" << std::endl;
                break;
            }
            default: {
                std::cout << "Choix invalide !" << std::endl;
                break;
            }
        }
        
    } while (choix != 0);
    
    return 0;
}