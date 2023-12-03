//
// Created by enigma on 29.11.23.
//
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){

    cout << "Entrez la liste de vos notes, 0 pour quitter : ";
    vector<double> grades;
    double temp;
    do{
        cin >> temp;
        if(cin.good()){
            grades.push_back(temp);
        }else{
            cout << "Erreur d'entrée";
            return -1;
        }
    }while(temp != 0);

    grades.pop_back();
    double moy = 0;
    for(size_t i = 0; i < grades.size(); ++i){
        moy += grades[i];
    }

    moy /= double(grades.size());

    cout << "nb de notes saisies = " << grades.size() << "\n";
    cout << "La moyenne des notes saisies = " << moy << endl;


}