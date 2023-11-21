//
// Created by enigma on 18.11.23.
//

#ifndef PRG1_RECUEIL_EXERCICES_DATE_H
#define PRG1_RECUEIL_EXERCICES_DATE_H
#include <iostream>

using namespace std;
struct Date {
    uint8_t jour;
    uint8_t mois;
    uint16_t annee;
};

void afficher_date(Date uneDate){
    cout << uneDate.jour << "." << uneDate.mois  << "." << uneDate.annee << endl;
}

bool est_bissextile(const Date& date){
    if ((date.annee % 400 == 0) or ((date.annee % 4 == 0) and (date.annee % 100 != 0))){
        return true;
    }else {
        return false;
    }
}
bool est_bissextile(const int date){
    if ((date % 400 == 0) or ((date % 4 == 0) and (date % 100 != 0))){
        return true;
    }else {
        return false;
    }
}
#endif //PRG1_RECUEIL_EXERCICES_DATE_H
