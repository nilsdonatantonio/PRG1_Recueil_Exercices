//
// Created by Nils on 03.01.2024.
//
#include <iostream>

using namespace std;

class Robot{
private:
    int position;
    bool direction; //0 pour avant, 1 pour arrière


public:
    //constructor
    Robot(int position = 0, bool direction = false);

    //getter
    int getPosition() const {return position;}

    //member functions
    void deplacer(int unite = 1);
    void faireDemiTour();
};

Robot::Robot(int position, bool direction) : position(position), direction(direction){}

void Robot::deplacer(int unite) {
    if(unite <= 0) return;

    if(!this->direction){
        this->position += unite;
    }else {
        this->position -= unite;
    }

}

void Robot::faireDemiTour(){
    this->direction = !this->direction;
}

int main() {
    Robot r1, r2(10);
    cout << "position courante de r2: " << r2.getPosition() << endl;
    r1.deplacer();
    cout << "position courante de r1: " << r1.getPosition() << endl;
    r1.deplacer(-1);
    cout << "position courante de r1: " << r1.getPosition() << endl;
    r1.deplacer(2);
    cout << "position courante de r1: " << r1.getPosition() << endl;
    r1.faireDemiTour();
    r1.deplacer(4);
    cout << "position courante de r1: " << r1.getPosition() << endl;
    return EXIT_SUCCESS;
}