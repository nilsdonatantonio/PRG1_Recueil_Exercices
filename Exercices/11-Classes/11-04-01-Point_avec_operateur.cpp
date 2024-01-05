//
// Created by Nils on 04.01.2024.
//
#include <iostream>
#include <cstdlib>
#include <utility>
#include <iomanip>

using namespace std;

class Point{
public:

    //setter
    void setX(double x);
    void setY(double y);

    //getter
    double getX() const;
    double getY() const;


    Point();
    Point(double x, double y);
    Point(const Point& point);

    friend ostream& operator<< (ostream& os, const Point& p);

    friend Point operator+ (Point& p1, Point& p2);
    friend Point operator* (double d, Point& p);
    friend Point operator* (Point& p, double d );

    friend bool operator== (const Point& p1, const Point& p2);

private:
    double x;
    double y;
};

Point::Point() : Point(0.,0.){}
Point::Point(double x, double y) : x(x), y(y){}
Point::Point(const Point& point) : x(point.x), y(point.y) {}

ostream& operator<<(ostream& os, const Point& p){
    os << "(" << p.x << "," << p.y << ")";

    return os;
}

Point operator+ (Point& p1, Point& p2){
    Point p_result = Point();

    p_result.x = p1.x + p2.x;
    p_result.y = p1.y + p2.y;

    return p_result;
}

Point operator* (double d, Point& p){
    Point p_r = Point();
    p_r.x = p.x * d;
    p_r.y = p.y * d;

    return p_r;
}

Point operator* (Point& p, double d ){
    Point p_r = Point();
    p_r.x = p.x * d;
    p_r.y = p.y * d;

    return p_r;
}

bool operator== (const Point& p1, const Point& p2){
    if(p1.x ==  p2.x and p1.y == p2.y) return true;

    return false;
}

int main() {

    Point p1(1.2, 2.4);
    Point p2(3., 4.2);

    cout << "p1" << p1 << ", p2" << p2 << endl;

    cout << "p1 + p2 = " << p1 + p2 << endl;
    cout << "p2 + p1 = " << p2 + p1 << endl;

    cout << "p1 * 2. = " << p1 * 2. << endl;
    cout << "3. * p1 = " << 3. * p1 << endl;

    cout << (p1 == p2 ? "p1 == p2" : "p1 != p2") << endl;
    Point p3(p1);
    cout << (p1 == p3 ? "p1 == p3" : "p1 != p3") << endl;
}