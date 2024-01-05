//
// Created by enigma on 02.01.24.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Pays{
public:

    void setName(string name);
    void setSize(int size);
    void setPop(double pop);
    string getName() {return name;}
    int getSize() {return size;}
    double getPop() {return pop;
    }
    Pays();
    Pays(string name, int size, double pop);

private:

    string name;
    int size;
    double pop;


};

Pays::Pays() : Pays("Unknown", 0, 0.) {}
Pays::Pays(string name, int size, double pop) : name(name), size(size), pop(pop){}

void Pays::setName(string name) {
    this->name = name;
}
void Pays::setSize(int size) {
    this->size = size;
}
void Pays::setPop(double pop) {
    this->pop = pop;
}

string plus_grand_pays(vector<Pays> pays){
    string plus_grand_pays;
    int taille_pays = 0;

    for(size_t i = 0 ; i < pays.size() ; ++i){

        if(i == 0){
           taille_pays = pays[i].getSize();
           plus_grand_pays = pays[i].getName();
        }else {
            if(pays[i].getSize() > taille_pays){
                taille_pays = pays[i].getSize();
                plus_grand_pays = pays[i].getName();
            }
        }
    }

    return plus_grand_pays;

}

string plus_grand_nombre(vector<Pays> pays){
    string plus_grand_nombre;
    double pop_pays = 0.;

    for(size_t i = 0 ; i < pays.size() ; ++i){

        if(i == 0){
            pop_pays = pays[i].getPop();
            plus_grand_nombre = pays[i].getName();
        }else {
            if(pays[i].getSize() > pop_pays){
                pop_pays = pays[i].getPop();
                plus_grand_nombre = pays[i].getName();
            }
        }
    }

    return plus_grand_nombre;
}

string plus_grande_densite(vector<Pays> pays){
    string plus_grande_densite;
    double densite = 0.;
    double temp_densite = 0.;

    for(size_t i = 0 ; i < pays.size() ; ++i){
        temp_densite = pays[i].getPop() / pays[i].getSize();
        if(i == 0){
            densite = temp_densite;
            plus_grande_densite = pays[i].getName();
        }else {
            if(temp_densite > densite){
                densite = temp_densite;
                plus_grande_densite = pays[i].getName();
            }
        }

    }

    return plus_grande_densite;
}

int main(){

    vector<Pays> vPays{
        Pays("Suisse", 41290, 8.121830),
        Pays("France", 547030, 66.663766 ),
        Pays("Italie", 301230,61.855120 ),
        Pays("Allemagne", 357021, 80.854408)
    };




    cout << "Pays ayant la plus grande superficie : " << plus_grand_pays(vPays) << endl;
    cout << "Pays ayant le plus d'habitants : " << plus_grand_nombre(vPays) << endl;
    cout << "Pays ayant la densite de population la plus grande : " << plus_grande_densite(vPays) << endl;

}
