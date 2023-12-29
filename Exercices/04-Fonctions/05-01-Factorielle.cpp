//
// Created by Nils on 29.12.2023.
//
#include <iostream>

using namespace std;

int facto(int n){

    if (n <= 1){
        return 1;
    }

    return n * facto(n-1);
}


int main(){


    cout << facto(10) << endl;
}