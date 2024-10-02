#ifndef MEDIATHEQUEI_H
#define MEDIATHEQUEI_H

#include <string>
#include "Media.h"

class IBibliotheque {
public:
    virtual void ajouterMedia(const Media& media) = 0;
    virtual void supprimerMedia(const std::string& titre) = 0;
    virtual Media rechercherMedia(const std::string& titre) = 0;
    virtual void afficherMediatheque() = 0;
};

#endif
