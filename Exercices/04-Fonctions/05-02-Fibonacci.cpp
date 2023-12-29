//
// Created by Nils on 29.12.2023.
//
#include <iostream>
using namespace std;

int fibo(int n){

    if(n < 2){
        return n;
    }

    return fibo (n-2) + fibo (n-1);
}


int main(){
    cout << fibo(10) << endl;
}