//
// Created by enigma on 02.12.23.
//


#include <vector>
#include <iostream>
#include <array>
#include <span>

using namespace std;

string to_string (span<const int> v) {
    string result = "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i)
            result += ", ";
        result += to_string(v[i]);
    }
    return result += "]";
}

bool inclut(span<const int> v,int i){
    for(const int e : v){
        if(e == i){
            return true;
        }
    }
    return false;
}

vector<int> ensemble(span<const int> input){
    vector<int> output {};

    for(const int i : input){
        if(!(inclut(output, i))){
            output.push_back(i);
        }
    }

    return output;

}

int main() {
    for (vector<int> const& v:
            {vector<int>{ 1, 2, 4, 1, 2, 5, 3, 6, 2, 1},
             {1, 1, 1, 1, 1, 1},
             {1, 2, 3, 4},
             {1},
             {}
            })
        cout << to_string(v) << " -> " << to_string(ensemble(v)) << endl;

    array a {1, 3, 2, 4, 2, 1, 3};
    cout << to_string(a) << " -> " << to_string(ensemble(a)) << endl;
}