//
// Created by enigma on 18.11.23.
//

#include "date.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Date date1 {1,12,1995};

    cout << boolalpha << est_bissextile(date1);
}