//
// Created by enigma on 28.11.23.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;
string to_string (const vector<int>& v) {
    string result = "[";
    for (size_t i = 0; i < v.size(); ++i) {
        if (i)
            result += ", ";
        result += to_string(v[i]);
    }
    return result += "]";
}

void supprimer_valeur(vector<int>& v, int val){
    if(v.empty()){
        return;
    }
    for(size_t i = 0; i < v.size(); ++i){
        if(v[i] == val){
            for(int j = i + 1; j < v.size(); j++){
                v[j-1] = v[j];
            }
            v.pop_back();
            --i;

        }
    }
}
int main() {
    for (vector<int> v: {vector<int>{},
                         {2},
                         {1, 2, 2, 2, 3, 1, 2, 4},
                         {2, 3, 4, 3, 2, 1},
                         {2, 2, 2},
                         {5, 4, 3, 2, 1, 2}
                         }) {
        cout << to_string(v) << " -> ";
        supprimer_valeur(v,2);
        cout << to_string(v) << endl;
    }
}