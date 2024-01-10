//
// Created by Nils on 09.01.2024.
//
#include <iostream>
#include <string>

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

template <typename T>
class Point{
private:
    string nom;
    Coord<T> coord;

public:
    //constructeurs
    Point() : nom(), coord() {}
    Point(const string& nom) : nom(nom), coord() {}
    Point(const string& nom, const Coord<T> coord) : nom(nom), coord(coord) {}
    Point(const string& nom, double x, double y) : nom(nom), coord(Coord(x,y)) {}

    //getter
    string getNom() const { return nom;}
    Coord<T> getCoord() const { return coord;}

    //setter
    void setNom(const string& nom) { this->nom = nom;}
    void setCoord(Coord<T> coord) { this->coord = coord;}

    //fonctions membres
    void afficher() const{
        cout << nom ; coord.afficher();
    }
    void deplacer(double dx, double dy){
        coord.deplacer(dx, dy);
    }

};

int main(){
    const Point<int> origin;

    cout << "p1       : ";
    Point<int> p1("p1"s);
    p1.afficher();
    cout << endl;

    cout << "p2       : ";
    Point<double> p2("p2"s, Coord(1.2, 3.4));
    p2.afficher();
    cout << endl;

    cout << "p3       : ";
    Point<double> p3("p3"s, 1.2, 3.4);
    p3.afficher();
    cout << endl;

    cout << "p3.1     : ";
    p3.setNom("p3.1"s);
    p3.afficher();
    cout << endl;

    cout << "p1(-1, 1): ";
    p1.setCoord(Coord(-1, 1));
    p1.afficher();
    cout << endl;

    cout << "p1->     : ";
    p1.deplacer(-1, 1);
    p1.afficher();
    cout << endl;

    cout << "p1(x)    : ";
    cout << p1.getNom() << " " << p1.getCoord().getX();
}