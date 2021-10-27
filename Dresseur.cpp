//
// Created by eric on 27/10/2021.
//

#include "Dresseur.h"

Dresseur::Dresseur(int age, const string &region) : age(age), region(region) {
    pointsExp=0;
}

void Dresseur::dresser(Pokemon &pokemon, const Attaque &attaque) {
connaissances.push_back(attaque.getNom());
pointsExp++;

}
