//
// Created by eric on 27/10/2021.
//

#include "Attaque.h"

const string &Attaque::getNom() const {
    return nom;
}

Attaque::Attaque(const string &nom, int pdegats) : nom(nom), pdegats(pdegats) {}

void Attaque::setPdegats(int pdegats) {
    Attaque::pdegats = pdegats;
}
