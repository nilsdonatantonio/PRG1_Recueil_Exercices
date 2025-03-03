//
// Created by enigma on 18.11.23.
//
#include <iostream>
using namespace std;
enum class Chiffre {ZERO, UN, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF};


Chiffre next(Chiffre c){
    return Chiffre((int(c) + 1) % 10);
}

void afficher(Chiffre c){
    switch(c){
        case Chiffre::UN :  cout << "UN"; break;
        case Chiffre::DEUX : cout << "DEUX"; break;
        case Chiffre::TROIS : cout << "TROIS"; break;
        case Chiffre::QUATRE : cout << "QUATRE"; break;
        case Chiffre::CINQ : cout << "CINQ"; break;
        case Chiffre::SIX : cout << "SIX"; break;
        case Chiffre::SEPT : cout << "SEPT"; break;
        case Chiffre::HUIT : cout << "HUIT"; break;
        case Chiffre::NEUF : cout << "NEUF"; break;
    }
}

int main(){
    Chiffre a = Chiffre::CINQ;
    Chiffre b = next(a);
    afficher(a);
    cout << (a < b ? " < " : " >= ");
    afficher(b);
}