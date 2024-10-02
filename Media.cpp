#include "Media.h"
using namespace std;

Media::Media() {
    titre = "";
    nomAuteur = "";
    anneeParution = 0;
}

Media::Media(std::string t, std::string nA, int annee) {
    titre = t;
    nomAuteur = nA;
    anneeParution = annee;
}

std::string Media::getTitre() {
    return titre;
}

std::string Media::getNomAuteur()  {
    return nomAuteur;
}

int Media::getAnneeParution()  {
    return anneeParution;
}

Media::~Media() {}
