#include "IMediatheque.h"
#include <iostream>

class Mediatheque{
private:
    const static int TAILLE = 100;
    int nombreMedias = 0;
    Media medias[TAILLE];

public:
    Mediatheque();
    ~Mediatheque();
    void ajouterMedia(const Media& media);
    void supprimerMedia(const std::string& titre);
    Media rechercherMedia(const std::string& titre) ;
    void afficherMediatheque();
};

Mediatheque::Mediatheque() {}

void Mediatheque::ajouterMedia(const Media& media) {
    if (nombreMedias < TAILLE) {
        medias[nombreMedias] = media;
        nombreMedias++;
    } else {
        std::cout << "La taille maximale de la bibliothèque est atteinte" << std::endl;
    }
}

Media Mediatheque::rechercherMedia(const std::string& titre) {
    for (int i = 0; i < nombreMedias; i++) {
        if (medias[i].getTitre() == titre) {
            return medias[i];
        }
    }
    return Media();
}

void Mediatheque::afficherMediatheque() {
    std::cout << "Bibliotheque : " << std::endl;
    for (int i = 0; i < nombreMedias; ++i) {
        std::cout << "Titre : " << medias[i].getTitre()
                  << ", Auteur : " << medias[i].getNomAuteur()
                  << ", Année de parution : " << medias[i].getAnneeParution()
                  << std::endl;
    }
}

void Mediatheque::supprimerMedia(const std::string& titre) {
    bool found = false;
    for (int i = 0; i < nombreMedias; i++) {
        if (medias[i].getTitre() == titre) {
            found = true;
        }
        if (found && i < nombreMedias - 1) {
            medias[i] = medias[i + 1];
        }
    }
    if (found) {
        nombreMedias--;
        std::cout << "Media supprimé : " << titre << std::endl;
    } else {
        std::cout << "Media non trouvé : " << titre << std::endl;
    }
}
