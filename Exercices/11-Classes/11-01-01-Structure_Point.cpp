//
// Created by enigma on 02.01.24.
//
#include <iostream>

using namespace std;

struct Point{
    double x = 0;
    double y = 0;

    void afficher() const;
    void deplacer(const double new_x, const double new_y);
};

void Point::afficher() const{
    cout << "(" << x << "," << y << ")" << endl;
}

void Point::deplacer(const double new_x, const double new_y) {
    x += new_x;
    y += new_y;
}

int main() {
    Point centre{};
    centre.afficher();

    Point p{1.2, 2.4};
    p.afficher();
    p.deplacer(0.8, 0.6);
    p.afficher();

    p.x = 5.5;
    p.y = 10.3;
    cout << p.x << " -- " << p.y << endl;
}