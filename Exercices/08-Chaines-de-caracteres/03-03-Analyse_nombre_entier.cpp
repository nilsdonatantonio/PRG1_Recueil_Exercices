//
// Created by enigma on 19.11.23.
//

#include <string>
#include <iostream>
#include <string_view>

using namespace std;

void analyse_nombre(const string& str){
    string nbr_digits = to_string(str.length());
    char premier_chiffre = str[0];
    char dernier_chiffre = str[str.length() -1];

    cout << "Nombre saisi        : " << str << "\n";
    cout << "Nombre de chiffres  : " << nbr_digits << "\n";
    cout << "Premier chiffre     : " << premier_chiffre << "\n";
    cout << "Dernier chiffre     : " << dernier_chiffre << endl;
}

int main(){
    int input = 0;

    cout << "Entrez un nombre entier >= 0 : ";
    cin >> input;

    analyse_nombre(to_string(input));

    return 0;
}