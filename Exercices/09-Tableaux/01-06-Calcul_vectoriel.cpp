//
// Created by enigma on 21.11.23.
//
#include <iostream>
#include <array>
#include <string>
#include <sstream>
using namespace std;

using Vec3d = array<double,3>;

string to_string(const Vec3d & array){
    return (stringstream () << '(' << array[0] << ',' << array[1] << ',' << array[2] << ')').str();
}

Vec3d produit( Vec3d array, double scalaire){
    for (double& e : array){
        e *= scalaire;
    }

    return array;
}

double produit_scalaire(const Vec3d & array1, const Vec3d & array2){
    double d{0};
    for(size_t i = 0; i < array1.size(); i++){
        d += array1[i] * array2[i];
    }
    return d;
}
Vec3d produit_vectoriel(const Vec3d & array1, const Vec3d & array2){
    Vec3d c{};
    for (size_t i = 0; i < 3; i++){
        c[i] = array1[(i+1)%3] * array2[(i+2)%3] - array1[(i+2)%3] * array2[(i+1)%3];
    }
    return c;


}

int main() {
    Vec3d a{1., 2., 3.};
    Vec3d b{2., 4., 3.};
    cout << "a = " << to_string(a) << endl
         << "b = " << to_string(b) << endl;

    Vec3d c = produit(a, 2.);
    cout << "c = a*2 = " << to_string(c) << endl;

    cout << "a.b = " << produit_scalaire(a, b)
         << ", a.c = " << produit_scalaire(a, c)
         << ", b.c = " << produit_scalaire(b, c) << endl;

    Vec3d d = produit_vectoriel(a, b);
    cout << "d = a^b = " << to_string(d) << endl;
    cout << "a.d = " << produit_scalaire(a, d)
         << ", b.d = " << produit_scalaire(b, d) << endl;

    Vec3d e = produit_vectoriel(a, a);
    cout << "e = a^a = " << to_string(e) << endl;
}