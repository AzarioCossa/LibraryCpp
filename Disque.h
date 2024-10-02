#ifndef DIQUE_H
#define DIQUE_H

#include "Media.h" 

class Dique : public Media {
private:
    int duree; 
    std::string genre;

public:

    Dique();

    Dique(std::string t, std::string nA, int annee, int d, std::string g);

    int getDuree();
    std::string getGenre();

    void setDuree(int d);
    void setGenre(std::string g);

    void afficherDetails();

    ~Dique();
};

#endif
