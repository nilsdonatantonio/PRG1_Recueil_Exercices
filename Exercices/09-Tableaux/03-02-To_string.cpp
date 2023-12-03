//
// Created by enigma on 29.11.23.
//

#include <string>
#include <span>
#include <vector>
#include <array>
#include <iostream>
#include <sstream>

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

int main(){

    int t[10]               = {1, 2, 3, 4, 5, 6};
    const array<int, 10> a  = {1, 2, 3, 4, 5, 6};
    vector<int> v           = {1, 2, 3, 4, 5, 6};

    cout << to_string(t) << endl;
    cout << to_string(a) << endl;
    cout << to_string(v) << endl;
}