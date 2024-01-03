//
// Created by enigma on 02.01.24.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Pays{
public:

    void setName(string name);
    void setSize(double size);
    void setPop(int pop);
    Pays();
    Pays(string name, double size, int pop);

private:

    string name;
    double size;
    int pop;


};

Pays::Pays() : Pays("Unknown", 0., 0) {}
Pays::Pays(std::string name, double size, int pop) : name(name), size(size), pop(pop){}

void Pays::setName(std::string name) {
    this->name = name;
}
void Pays::setSize(double size) {
    this->size = size;
}
void Pays::setPop(int pop) {
    this->pop = pop;
}

string plus_grand_pays(){

}

int main(){
    Pays suisse ("Suisse", 8.121830, 41290);
    Pays france ("France", 66.663766, 547030);
    Pays italie ("Italie", 61.855120, 301230);
    Pays allemagne ("Allemagne", 80.854408, 357021);

    int col_size = 15;

    cout << "Pays ayant la plus grande superficie : " << plus_grand_pays() << endl;
    cout << "Pays ayant le plus d'habitants : " << plus_grand_nombre() << endl;
    cout << "Pays ayant la densite de population la plus grande : " << plus_grande_densite() << endl;

}
