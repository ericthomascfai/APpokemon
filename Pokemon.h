//
// Created by eric on 27/10/2021.
//

#ifndef AP_POKEMON_POKEMON_H
#define AP_POKEMON_POKEMON_H

#include <string>
#include "Attaque.h"
#include "Protection.h"
#include <vector>
using namespace std;
class Pokemon {

private:

    string nom;
    int pv;
    vector<Attaque> mesattaques;
    Protection maprotection;


public:
    Pokemon(const string &nom,const string &nomprotection,int pv,float tauxprotec);
    void attaquer(Pokemon &pokemon,const string &nomattaque);
    void seDefendre(Attaque &attaque);
    const string &getNom() const;

};


#endif //AP_POKEMON_POKEMON_H
