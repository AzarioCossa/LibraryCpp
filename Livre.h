#ifndef LIVRO_H
#define LIVRO_H

#include "Media.h"
#include <string>

class Livre : public Media {
public:
    Livre();
    Livre(const std::string& titre, const std::string& nomAuteur, int anneeParution, int nombrePages);
    
    int getNombrePages() const;
    void setNombrePages(int nombrePages);

private:
    int nombrePages;
};

#endif
