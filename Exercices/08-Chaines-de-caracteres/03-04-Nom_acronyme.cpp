//
// Created by enigma on 19.11.23.
//
#include <string>
#include <iostream>
#include <cctype>
#include <string_view>


using namespace std;

string to_upper(string_view acronyme){
    string str(acronyme);
    for(char& c : str){
        c = toupper(c);
    }
    return str;
}

int main(){
    string prenom;
    string nom;
    cout << "Entrez votre prenom et votre nom : ";
    cin >> prenom >> nom;

    string acronyme {prenom.at(0), nom.at(0), nom.at(nom.length() - 1 )};

    cout << "Votre prenom est    : " << prenom << "\n";
    cout << "Votre nom est       : " << nom << "\n";
    cout << "Votre acronyme est  : " << to_upper(acronyme) << endl;


}