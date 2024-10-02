#ifndef MEDIA_H
#define MEDIA_H

#include <string>

class Media {
public:
    Media(); 
    Media(std::string, std::string, int);
    std::string getTitre();
    std::string getNomAuteur() ;
    int getAnneeParution() ;
    ~Media();
    
private:
    std::string titre;
    std::string nomAuteur;
    int anneeParution;
};

#endif
