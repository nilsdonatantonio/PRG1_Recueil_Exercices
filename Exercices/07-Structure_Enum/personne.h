//
// Created by enigma on 18.11.23.
//

#ifndef PRG1_RECUEIL_EXERCICES_PERSONNE_H
#define PRG1_RECUEIL_EXERCICES_PERSONNE_H
#include <string>
#include <iostream>
#include "date.h"
using namespace std;

struct Personne{
    string nom, ville;
    Date uneDate;
};

void afficher_personne(Personne personne){
    cout << "Nom          : " << personne.nom << "\n";
    cout << "Adresse      : " << personne.ville << "\n";
    cout << "Anniversaire : " << personne.uneDate.jour << "." << personne.uneDate.mois << "."
    << personne.uneDate.annee << endl;
}
#endif //PRG1_RECUEIL_EXERCICES_PERSONNE_H
