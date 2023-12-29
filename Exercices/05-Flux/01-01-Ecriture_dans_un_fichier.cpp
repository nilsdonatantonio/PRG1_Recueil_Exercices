//
// Created by Nils on 29.12.2023.
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Entrer le nom du fichier" << endl;
    string filename;
    getline(cin, filename);

    ofstream file_out(filename, ios::app);

    if (!file_out) {
        cerr << "Erreur d'ouverture du fichier\n";
        return EXIT_FAILURE;
    }


    string texte;
    string terminer = "#exit#";

    cout << "Entrer du texte a enregistrer dans le fichier : \n";

    while(getline(cin, texte)) {
        if (texte == terminer) break;
        file_out << texte << endl;
    }

    file_out.close();

    cout << "Le texte a été enregistré"<< endl;

    return EXIT_SUCCESS;
}