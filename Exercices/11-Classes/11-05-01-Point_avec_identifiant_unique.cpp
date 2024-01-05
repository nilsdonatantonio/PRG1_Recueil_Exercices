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
    Point(double x, double y, double xMax = 100, double yMax = 100);

private:
    double x;
    double y;
    double xMax;
    double yMax;
    static int id;

    bool x_valide(double x) const;
    bool y_valide(double y) const;
};

Point::Point() : Point(0.,0.){}
Point::Point(double x, double y, double xMax, double yMax) : x(x), y(y), xMax(max(x, xMax)), yMax(max(y, yMax)){}

bool Point::x_valide(double x) const {
    return x >= 0 and x <= xMax;
}

bool Point::y_valide(double y) const {
    return y >= 0 and y <= yMax;
}

void Point::setX(double x) {
    if(x_valide(x))
        this->x = x;
}

void Point::setY(double y) {
    if(y_valide(y))
        this->y  = y;
}

double Point::getX() const {
    return this->x;
}

double Point::getY() const {
    return this->y;
}

void Point::deplacer(double new_x, double new_y) {
    if(x_valide(x + new_x) and y_valide(y + new_y)){
        x += new_x;
        y += new_y;
    }

}

void Point::afficher() const {
    cout << "(" << x << "," << y << ")" << ", contraintes: [0," << xMax << "]x[0," << yMax << "]" << endl;
}

int main() {

    Point p1(1.2, 2.4);
    p1.afficher();

    cout << "Nombre de points : " << Point::getNbPoints() << endl;
    cout << "-------------------------------------------" << endl;

    {
        Point p2(3., 4.2, 10., 10.);
        p2.afficher();

        cout << "Nombre de points : " << Point::getNbPoints() << endl;
        cout << "-------------------------------------------" << endl;

        p2 = p1;
        p2.afficher();

        cout << "Nombre de points : " << Point::getNbPoints() << endl;
        cout << "-------------------------------------------" << endl;

        Point p3 = p2;
        p3.afficher();

        cout << "Nombre de points : " << Point::getNbPoints() << endl;
        cout << "-------------------------------------------" << endl;
    }

    Point p4(5, 10);
    p4.afficher();

    cout << "Nombre de points : " << Point::getNbPoints() << endl;
    cout << "-------------------------------------------" << endl;
}
