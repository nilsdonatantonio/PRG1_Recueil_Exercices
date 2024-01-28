//
// Created by enigma on 17.01.24.
//
#include <iostream>
#include <exception>
#include <vector>

using namespace std;

void removeFromVector(std::vector<int>& vec, size_t pos);

int main(){

    vector<int> v{1,2,3,4,5};

    for (size_t pos : {-1,7,3}){
        try{
            removeFromVector(v, pos);
        }catch (exception& e){
            cout << e.what() << endl;
        }
        for (int e : v) {
            cout << e << " ";
        }
        cout << endl;
    }
}

void removeFromVector(std::vector<int>& vec, size_t pos){
    if(pos >= vec.size()){
        throw out_of_range(__func__ + " : indice pas contenu dans le vecteur"s);
    }

    vec.erase(vec.begin() + pos);
}