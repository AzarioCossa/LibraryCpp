#include "BibliothequeTableau.cpp"
#include <iostream>

using namespace std;

int main(void) {
    BibliothequeTableau bibliothequeTableau;
    bool run = true;
    int choice;

    do {
        cout << "Menu :\n";
        cout << "1. Afficher la bibliothèque\n";
        cout << "2. Ajouter un livre\n";
        cout << "3. Supprimer un livre\n";
        cout << "4. Rechercher un livre\n";
        cout << "5. Quitter\n";
        cout << "Indiquez votre choix : ";
        cin >> choice;

        string titre;
        Livre livre;
        string nomAuteur;
        int anneeParution; 
        int nombrePages;

        switch (choice) {
            case 1:
                bibliothequeTableau.afficherBibliotheque();
                break;

            case 2:
                cout << "Entrez le titre du livre : ";
                cin.ignore(); // Pour ignorer le saut de ligne
                getline(cin, titre);
                
                cout << "Entrez le nom de l'auteur : ";
                getline(cin, nomAuteur);
                
                cout << "Entrez l'année de parution : ";
                cin >> anneeParution;
                
                cout << "Entrez le nombre de pages : ";
                cin >> nombrePages;

                livre = Livre(titre, nomAuteur, anneeParution, nombrePages);
                bibliothequeTableau.ajouterLivre(livre);
                break;

            case 3:
                cout << "Entrez le titre du livre à supprimer : ";
                cin.ignore(); // Pour ignorer le saut de ligne
                getline(cin, titre);
                bibliothequeTableau.supprimerLivre(titre);
                break;

            case 4:
                cout << "Entrez le titre du livre à rechercher : ";
                cin.ignore(); // Pour ignorer le saut de ligne
                getline(cin, titre);
                livre = bibliothequeTableau.rechercherLivre(titre);
                if (livre.getTitre() != "") {
                    cout << "Livre trouvé : " << livre.getTitre() << " - " << livre.getNomAuteur() << endl;
                } else {
                    cout << "Livre non trouvé." << endl;
                }
                break;

            case 5:
                run = false;
                cout << "À plus mon gars !" << endl;
                break;

            default:
                cout << "Choix invalide. Veuillez réessayer." << endl;
                break;
        }
    } while (run);
    bibliothequeTableau.~BibliothequeTableau();
    return 0;
}
