//
// Created by Nils on 30.12.2023.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_avg(const double math_grade, const double prg_grade){
    double avg;

    return (avg = (math_grade + prg_grade) / 2);
}

void show(const string& name, const int age, const double math_grade, const double prg_grade){
    int wcol = 13;

    double avg = calc_avg(math_grade, prg_grade);
    cout << left << setw(wcol) << "Nom" << setw(wcol) << right << "Age" << setw(wcol) << "Note Math"
    << setw(wcol) << "Note PRG1" << setw(wcol) << "Admis" << endl;

    cout << setw(5*wcol) << setfill('-') << endl;

    cout << left << setw(wcol) << setfill(' ') << name << setw(wcol)
    << right << age << setw(wcol) << math_grade << setw(wcol)
    << prg_grade << setw(wcol) << (avg < 3.8 ? "Non" : "Oui") << endl;

    cout  << setw(5*wcol) << setfill('-') << endl;

    cout  << left << setfill(' ') << "Moyenne : " << avg << endl;
    cout << "Resultat : " << (avg < 3.8 ? "Non-admis" : "Admis") << endl;

}

int main(){

    cout << "Entrez le nom de l'etudiant.e : ";
    string name;
    getline(cin, name);

    cout << "\nEntrez l'age de l'etudiant.e : ";
    int age;
    cin >> age;

    cout << "\nEntrez la note en mathematiques (max. 6): ";
    double math_grade;
    cin >> math_grade;

    cout << "\nEntrez la note en PRG1 (max. 6): ";
    double prg_grade;
    cin >> prg_grade;

    show(name,age,math_grade,prg_grade);

    return EXIT_SUCCESS;

}