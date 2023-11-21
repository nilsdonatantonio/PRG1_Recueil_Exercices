//
// Created by enigma on 19.11.23.
//
#include <string>
#include <string_view>
#include <iostream>

using namespace std;

string milieu_chaine(string& str){
    string output;
    if(str.length() % 2 == 0){

       int pos_nbr1 = str.length()/2 -1;
       int pos_nbr2 = str.length()/2;

       output = str[pos_nbr1];
       output += str[pos_nbr2];
   }else {
        int pos_nbr = str.length()/2;

        output = str[pos_nbr];
    }

    return output;

}

int main(){
    string test = "pomme";
    string test2 = "abba";

    cout << "Lettre(s) médiane(s) 1 : " << milieu_chaine(test) << endl;
    cout << "Lettre(s) médiane(s) 2 : " << milieu_chaine(test2) << endl;
}