#include "Media.h"
#include <iostream>

class Dique : public Media {
private:
    int duree;          
    std::string genre;

public:
    Dique() : Media() {
        duree = 0;
        genre = "";
    }

    Dique(std::string t, std::string nA, int annee, int d, std::string g)
        : Media(t, nA, annee), duree(d), genre(g) {}

    int getDuree() {
        return duree;
    }

    std::string getGenre() {
        return genre;
    }

    void setDuree(int d) {
        duree = d;
    }

    void setGenre(std::string g) {
        genre = g;
    }

    void afficherDetails() {
        std::cout << "Titre: " << getTitre() << std::endl;
        std::cout << "Auteur: " << getNomAuteur() << std::endl;
        std::cout << "Annee de parution: " << getAnneeParution() << std::endl;
        std::cout << "Duree: " << duree << " minutes" << std::endl;
        std::cout << "Genre: " << genre << std::endl;
    }

    ~Dique() {}
};
