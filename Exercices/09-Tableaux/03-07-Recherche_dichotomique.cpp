//
// Created by enigma on 22.11.23.
//
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <span>

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


bool recherche(span<const int> s, int e ){
    if(s.empty()) return false;
    size_t mid = s.size() /2;
    if(e < s[mid]){
        return recherche(s.first(mid), e);
    }else if(e > s[mid]){
        return recherche(s.last(s.size() - mid -1), e);
    }else {
        return true;
    }
}
int main() {
    for (vector<int> const& v:
            {vector<int>{1, 2, 3, 5, 7, 11, 13, 17},
             {1, 3, 5, 7, 9, 11, 13, 15, 17},
             {2, 4, 6, 8, 10, 12, 14, 16, 18},
             {5, 10, 15, 20},
             {11},
             {1},
             {}
            }) {
        for (int e: {3, 11, 15}) {
            cout << to_string(v)
                 << (recherche(v, e) ? " contient " : " ne contient pas ")
                 << e << endl;
        }
    }
}