#include "Livre.h"

// Construtor padrão
Livre::Livre() : Media(), nombrePages(0) {}

// Construtor com parâmetros
Livre::Livre(const std::string& titre, const std::string& nomAuteur, int anneeParution, int nombrePages)
    : Media(titre, nomAuteur, anneeParution), nombrePages(nombrePages) {}

// Getter para o número de páginas
int Livre::getNombrePages() const {
    return nombrePages;
}

// Setter para o número de páginas
void Livre::setNombrePages(int nombrePages) {
    this->nombrePages = nombrePages;
}
