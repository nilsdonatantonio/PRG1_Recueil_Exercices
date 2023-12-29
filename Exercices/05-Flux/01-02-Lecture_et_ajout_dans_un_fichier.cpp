//
// Created by Nils on 29.12.2023.
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

bool read_file(const string& filename){
    ifstream file_in(filename);

    if(!file_in) return false;

    while(file_in){
        string input;
        getline(file_in, input);
        cout << input << "\n";
    }

    file_in.close();

    return true;
}

bool write_file(const string& filename){
    ofstream file_out(filename, ios::app);

    if(!file_out) return false;

    string str;
    string end = "#exit#";

    cout << "Entrer du texte a enregistrer dans le fichier\n";
    while(getline(cin, str)){
        if(str == end){
            break;
        }
        file_out << str << endl;
    }

    file_out.close();

    return true;

}

int main(){

    cout << "Entrer le nom du fichier : "<< endl;
    string filename;
    getline(cin,filename);

    read_file(filename);
    write_file(filename);

    return EXIT_SUCCESS;
}
