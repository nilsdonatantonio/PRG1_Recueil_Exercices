//
// Created by enigma on 26.01.24.
//

#include "display_csv.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

void display_csv(string file_name, char separation_char, int col_width){
    ifstream file_in(file_name);
    if(not file_in){
        throw File_not_found{};
    }

    string line;
    while(getline(file_in, line)){
        stringstream s(line);
        string element;
        while(getline(s, element, separation_char)){
            cout << setw(col_width) << element;
        }

        cout << endl;
    }
}
