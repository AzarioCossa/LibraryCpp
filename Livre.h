#ifndef LIVRO_H
#define LIVRO_H

#include "Media.h"
#include <string>

class Livre : public Media {
public:
    Livre();  // Construtor padrão
    Livre(const std::string& titre, const std::string& nomAuteur, int anneeParution, int nombrePages);
    
    int getNombrePages() const;
    void setNombrePages(int nombrePages);

private:
    int nombrePages;  // Atributo específico da classe Livro
};

#endif
