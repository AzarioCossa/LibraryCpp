#ifndef DIQUE_H
#define DIQUE_H

#include "Media.h"  // Incluir a classe base

class Dique : public Media {
private:
    int duree;           // Duração do dique em minutos
    std::string genre;   // Gênero do dique

public:
    // Construtor padrão
    Dique();

    // Construtor com parâmetros
    Dique(std::string t, std::string nA, int annee, int d, std::string g);

    // Getters
    int getDuree();
    std::string getGenre();

    // Setters
    void setDuree(int d);
    void setGenre(std::string g);

    // Método para exibir os detalhes do Dique
    void afficherDetails();

    // Destrutor
    ~Dique();
};

#endif
