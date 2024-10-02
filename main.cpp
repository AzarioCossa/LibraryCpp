#include "Mediatheque.cpp"
#include <iostream>

using namespace std;

int main(void) {
    Mediatheque mediatheque;
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
        Media media;
        string nomAuteur;
        int anneeParution; 

        switch (choice) {
            case 1:
                mediatheque.afficherMediatheque();
                break;

            case 2:
                cout << "Entrez le titre de la media: ";
                cin.ignore();
                getline(cin, titre);
                
                cout << "Entrez le nom de l'auteur : ";
                getline(cin, nomAuteur);
                
                cout << "Entrez l'année de parution : ";
                cin >> anneeParution;

                media = Media(titre, nomAuteur, anneeParution);
                 mediatheque.ajouterMedia(media);
                break;

            case 3:
                cout << "Entrez le titre de la media à supprimer : ";
                cin.ignore();
                getline(cin, titre);
                 mediatheque.supprimerMedia(titre);
                break;

            case 4:
                cout << "Entrez le titre de la media à rechercher : ";
                cin.ignore();
                getline(cin, titre);
                media =  mediatheque.rechercherMedia(titre);
                if (media.getTitre() != "") {
                    cout << "Media trouvé : " << media.getTitre() << " - " << media.getNomAuteur() << endl;
                } else {
                    cout << "Media non trouvé." << endl;
                }
                break;

            case 5:
                run = false;
                cout << "À plus !" << endl;
                break;

            default:
                cout << "Choix invalide. Veuillez réessayer." << endl;
                break;
        }
    } while (run);
     mediatheque.~Mediatheque();
    return 0;
}
