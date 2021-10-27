//
// Created by eric on 27/10/2021.
//

#include "Pokemon.h"

const string &Pokemon::getNom() const {
    return nom;
}

Pokemon::Pokemon(const string &nom,const string &nomprotection,int pv,float tauxprotec) : nom(nom),pv(pv), maprotection(nomprotection,tauxprotec) {


}

void Pokemon::attaquer(Pokemon &pokemon, const string &nomattaque) {

}

void Pokemon::seDefendre(Attaque &attaque) {

}
