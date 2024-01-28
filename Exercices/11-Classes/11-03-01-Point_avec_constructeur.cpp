//
// Created by enigma on 02.01.24.
//
#include <iostream>
#include <cstdlib>
#include <utility>

using namespace std;

class Point{
public:

    void setX(double x);
    void setY(double y);

    double getX() const;
    double getY() const;

    void deplacer(double new_x, double new_y);
    void afficher() const;

    Point();
    Point(double x, double y);

private:
    double x;
    double y;
};

Point::Point() : Point(0.,0.){}
Point::Point(double x, double y) : x(x), y(y){}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y  = y;
}

double Point::getX() const {
    return this->x;
}

double Point::getY() const {
    return this->y;
}

void Point::deplacer(double new_x, double new_y) {
    x += new_x;
    y += new_y;
}

void Point::afficher() const {
    cout << "(" << x << "," << y << ")" << endl;
}

int main() {
    Point centre;
    centre.afficher();

    Point p(1.2,2.4);
    p.afficher();

    p.deplacer(0.8, 0.6);
    p.afficher();

    p.setX(5.5);
    p.setY(10.3);
    cout << p.getX() << " -- " << p.getY() << endl;
}