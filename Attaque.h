//
// Created by eric on 27/10/2021.
//

#ifndef AP_POKEMON_ATTAQUE_H
#define AP_POKEMON_ATTAQUE_H

#include <string>

using namespace std;
class Attaque {

private:
    string nom;
    int pdegats;

public:
    Attaque(const string &nom, int pdegats);

    const string &getNom() const;

    void setPdegats(int pdegats);

};


#endif //AP_POKEMON_ATTAQUE_H
