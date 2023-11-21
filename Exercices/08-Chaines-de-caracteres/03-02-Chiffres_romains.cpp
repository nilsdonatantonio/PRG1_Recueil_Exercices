//
// Created by enigma on 19.11.23.
//
#include <string>
#include <iostream>
using namespace std;

int valeur_chiffre_romain(const char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int conversion_chiffre_romain(string& str){
    int output = 0;
    for(int i = 0; i < str.length() ; i++){
        if((i != 0) and (valeur_chiffre_romain(str[i-1]) < valeur_chiffre_romain(str[i]))){
            continue;
        }
        if (valeur_chiffre_romain(str[i+1]) > valeur_chiffre_romain(str[i])){
            output += valeur_chiffre_romain(str[i+1]) - valeur_chiffre_romain(str[i]);
        }else {
            output += valeur_chiffre_romain(str[i]);
        }
    }
    return output;
}

int main(){
    string test1 = "I";
    string test2 = "II";
    string test3 = "III";
    string test4 = "IV";
    string test5 = "V";
    string test6 = "VI";
    string test7 = "IX";
    string test8 = "MMMMDCCCLXXXVIII";

    cout << test1 << " = " << conversion_chiffre_romain(test1) << "\n";
    cout << test2 << " = " << conversion_chiffre_romain(test2) << "\n";
    cout << test3 << " = " << conversion_chiffre_romain(test3) << "\n";
    cout << test4 << " = " << conversion_chiffre_romain(test4) << "\n";
    cout << test5 << " = " << conversion_chiffre_romain(test5) << "\n";
    cout << test6 << " = " << conversion_chiffre_romain(test6) << "\n";
    cout << test7 << " = " << conversion_chiffre_romain(test7) << "\n";
    cout << test8 << " = " << conversion_chiffre_romain(test8) << endl;

}