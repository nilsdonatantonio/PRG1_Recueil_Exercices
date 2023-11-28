//
// Created by enigma on 25.11.23.
//
#include <iostream>
#include <vector>

using namespace std;


string to_string(const vector<int>& v){
    string output;
    output += "[";
    for(size_t i = 0; i < v.size(); ++i){
        if(i){
            output += ", ";
        }
        output += to_string(v[i]);
    }
    output += "]";

    return output;
}

int main(){
    const vector<int> v = {1,2,3,4,5,6};
    cout << to_string(v); // [1,2,3,4,5,6]
}