//
// Created by enigma on 17.01.24.
//

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <limits>
using namespace std;


int sommeNPremiersEntiers(int n);
void test(int n);

int main() {

    test(-1);
    test(0);
    test(1);
    test(65535);
    test(65536);

    return EXIT_SUCCESS;
}

int sommeNPremiersEntiers(int n){
    if(n < 0){
        throw invalid_argument("n doit être plus grand que 0");
    }
    int somme = n*(n+1)/2;
    if(somme > numeric_limits<int>::max()){
        throw overflow_error("Nombre non représentable dans la base choisie");
    }
    return somme;
}

void test(int n) {
    cout << "sommeNPremiersEntiers(" << to_string(n) << ")";
    try {
        cout << " = " << sommeNPremiersEntiers(n) << endl;
    } catch (const exception& e) {
        cout << ": " << e.what() << endl;
    }
}