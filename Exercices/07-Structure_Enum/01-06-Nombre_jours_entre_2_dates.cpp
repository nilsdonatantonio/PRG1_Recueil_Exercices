//
// Created by enigma on 18.11.23.
//
#include <iostream>
#include <string>
#include "date.h"

using namespace std;

int date_to_int(const Date& date){

    int nbr_annee_bis = 0;
    for(int i = 0; i < date.annee; i++){
        if(est_bissextile(i)){
            nbr_annee_bis++;
        }
    }

    int nbr_j_annees = (nbr_annee_bis * 366) + (date.annee - nbr_annee_bis - 1)* 365;

    int nbr_j_mois = 0;
    for(int i = 1; i < date.mois ; i++){
        switch(i) {
            case 2:
               nbr_j_mois += est_bissextile(i) ? 29 : 28;
               break;
               case 4: case 6: case 9: case 11:
                   nbr_j_mois += 30;
                   break;
            default:
                nbr_j_mois += 31;

        }
    }

    return nbr_j_annees + nbr_j_mois + date.jour;
}

int jours_entre(const Date& date1, const Date& date2){
    int d1 = date_to_int(date1);
    int d2 = date_to_int(date2);

    return d2 - d1;
}

string to_string(const Date& date){
    string new_date;

    new_date += to_string(date.jour) + "/";
    new_date += to_string(date.mois) + "/";
    new_date += to_string(date.annee);

    return new_date;
}


int main(){
    Date d1{31,1,1973};
    Date d2{7,1,2023};
    cout << jours_entre(d1,d2) << " jours entre "
        << to_string(d1) << " et "
        << to_string(d2) << endl;
}