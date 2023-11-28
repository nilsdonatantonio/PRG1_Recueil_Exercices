//
// Created by enigma on 25.11.23.
//

#include <iostream>
#include <array>
#include <string_view>
#include <string>

using namespace std;

enum class  Day { ERROR,   LUNDI,   MARDI,   MERCREDI,   JEUDI,   VENDREDI,   SAMEDI,   DIMANCHE};
const array DAY {"ERROR", "LUNDI", "MARDI", "MERCREDI", "JEUDI", "VENDREDI", "SAMEDI", "DIMANCHE"};

Day string_to_day(string_view v){
    for(size_t i = 0; i < DAY.size(); i++){
        if(v == DAY[i]){
            return Day(i);
        }
        return Day::ERROR;
    }
}

string day_to_string(Day d){
    if(d >= Day::LUNDI and d <= Day::DIMANCHE){
        return DAY[size_t(d)];
    }
    return DAY[size_t(Day::ERROR)];
}