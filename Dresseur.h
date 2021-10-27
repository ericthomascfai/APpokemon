//
// Created by eric on 27/10/2021.
//

#ifndef AP_POKEMON_DRESSEUR_H
#define AP_POKEMON_DRESSEUR_H

#include <string>
#include <vector>
#include "Pokemon.h"
#include "Attaque.h"

using namespace std;
class Dresseur {

private:
    int age;
    string region;
    vector<string> connaissances;
    int pointsExp;
public:
    Dresseur(int age, const string &region);

   void dresser(Pokemon &pokemon,const Attaque &attaque);
};


#endif //AP_POKEMON_DRESSEUR_H
