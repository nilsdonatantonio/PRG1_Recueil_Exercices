//
// Created by enigma on 29.11.23.
//
#include <iostream>
#include <vector>
#include <array>
#include <span>


using namespace std;

bool est_strictement_croissant(const span<const int> s){
    for(size_t i = 1 ; i < s.size() ; i++){
        if (s[i] < s[i-1] or s[i] == s[i-1]){
            return false;
        }
    }
    return true;
}

string to_string (span<const int> v) {
    string result = "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i)
            result += ", ";
        result += to_string(v[i]);
    }
    return result += "]";
}

int main() {
    for (vector<int> const& v:
            {vector<int>{1, 2, 3, 4, 6, 9},
             {1, 2, 3, 4, 6, 5},
             {1, 2, 3, 3, 4, 4},
             {1},
             {}})
        cout << to_string(v)
             << (est_strictement_croissant(v) ? " est" : " n'est pas")
             << " strictement croissant" << endl;

    array a { 2, 3, 5, 7, 11, 13};
    cout << to_string(a)
         << (est_strictement_croissant(a) ? " est" : " n'est pas")
         << " strictement croissant" << endl;
}