//
// Created by eric on 27/10/2021.
//

#ifndef AP_POKEMON_PROTECTION_H
#define AP_POKEMON_PROTECTION_H

#include <string>

using namespace std;

class Protection {

private:
     string nom;
     float tauxprotec;

public:
     Protection(const string &nom);
     Protection(const string &nom,float tauxprotec);

};


#endif //AP_POKEMON_PROTECTION_H
