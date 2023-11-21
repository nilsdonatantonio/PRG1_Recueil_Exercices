//
// Created by enigma on 19.11.23.
//
#include <string>
#include <iostream>

using namespace std;

int compter_occurence(string_view chaine, string_view sous_chaine){
    size_t cnt = 0, pos=0;

    while((pos= chaine.find(sous_chaine, pos)) != string::npos){
        ++cnt;
        ++pos;
    }
    return cnt;
}

int main() {
    string chaine;
    string sub;
    cout << "Entrer une chaine de caracteres : " << endl;
    getline(cin, chaine);

    cout << "Entrez la suite de caracteres à compter : " << endl;
    getline(cin, sub);

    int occurences = compter_occurence(chaine, sub);

    cout << "La suite de caracteres \"" << sub << "\" apparait " << occurences << " fois dans la chaine \"" << chaine << "\"" << endl;


}