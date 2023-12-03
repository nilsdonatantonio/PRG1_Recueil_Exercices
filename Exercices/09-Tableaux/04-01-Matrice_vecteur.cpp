//
// Created by enigma on 03.12.23.
//

#include <array>
#include <iostream>
#include <string>

using namespace std;

using Vec3 = array<int, 3>;
using Matrice3x3 = array<array<double,3>,3>;


Vec3 produit(Matrice3x3 m, Vec3 v){
    Vec3 output{};
    //Itère sur la longueur correspondant au nombre d'élément contenu dans une ligne
    for(size_t i = 0; i < m[i].size() ; ++i){

    }



    return output;
}

string to_string(Matrice3x3 m){
    string output = "[";
    for(size_t i = 0 ; i < m.size(); ++i){
        output += "[";
        for(size_t j = 0 ; j < m[i].size(); ++j){
            if(j){
                output += ",";
            }
            output += to_string(int(m[i][j]));
        }
        output += "]\n";
    }
    output += "]";

    return output;
}

string to_string(Vec3 v){
    string output = "[";

    for(size_t i = 0 ; i < v.size(); ++i){
        if(i){
            output += ",";
        }
        output += to_string(int(v[i]));
    }
    output += "]";

    return output;
}


int main() {

    Matrice3x3 m = {1, 1, 0, 0, 2, 0, 0, 0, 1};
    Vec3 v = {1, 2, 3};
    Vec3 w = produit(m,v);

    cout << to_string(m) << " * "
         << to_string(v) << " = "
         << to_string(w) << endl;
}