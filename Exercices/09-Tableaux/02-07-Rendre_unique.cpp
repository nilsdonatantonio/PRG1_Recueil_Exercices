//
// Created by enigma on 22.11.23.
//
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string to_string (const vector<int>& v) {
    if (v.empty()) return "[]";
    stringstream out;
    out << '[' << v.front();
    for (size_t i = 1; i < v.size(); ++i)
        out << ", " << v[i];
    out << ']';
    return out.str();
}

void rendre_unique(vector<int> & v){
    if(v.empty()){
        return;
    }
    for(int i = 1; i < v.size(); i++){
        if(v[i-1] == v[i]){
            size_t pos = i -1;
            for(size_t j = pos + 1; j < v.size(); j++ ){
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
                         {2, 3, 3, 2, 2, 1},
                         {2, 2, 2},
                         {5, 4, 4, 3, 2, 2, 2, 3}}) {
        cout << to_string(v) << " -> ";
        rendre_unique(v);
        cout << to_string(v) << endl;
    }
}