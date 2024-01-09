//
// Created by enigma on 09.01.24.
//

#include <iostream>


using namespace std;

template<typename T>
class Coord{
private:
    T x;
    T y;

public:
    Coord() :x(), y() {}
    Coord(T x, T y) : x(x), y(y) {}

    const T& getX() const { return x;}
    const T& getY() const { return y;}

    void afficher() const {
        cout << "(" << x << ", " << y << ")";
    }
    void setCoord(T x, T y){
        this->x = x;
        this->y = y;
    }
    void deplacer(T new_x, T new_y){
        x += new_x;
        y += new_y;
    }
};


int main(){
    cout << "origine  : ";
    const Coord<int> origin;
    origin.afficher();
    cout << endl;

    cout << "p1       : ";
    Coord<int> p1;
    p1.setCoord(1, 2);
    p1.afficher();
    cout << endl;

    cout << "p2       : ";
    Coord<double> p2(3, 4);
    p2.afficher();
    cout << endl;


    cout << "p2->     : ";
    p2.deplacer(1, 1);   // conversion int => double
    cout << "(" << p2.getX() << ", " << p2.getY() << ")";
    cout << endl;
}