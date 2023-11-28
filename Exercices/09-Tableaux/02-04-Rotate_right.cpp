//
// Created by enigma on 25.11.23.
//
#include <iostream>
#include <vector>


using namespace std;

void rotateRight(vector<int>& v) {
    if (v.size() > 1) {
        int tmp = v.back();
        for (size_t i = v.size() - 1; i > 0; --i) {
            v[i] = v[i - 1];
        }
        v[0] = tmp;
    }
}
void afficher(vector<int> &v) {
    cout << "[";
    for(int i : v){
        if(i == v.size()){
            cout << i;
        }else {
            cout << i << ", ";
        }

    }
    cout << "]" << endl;
}
int main(){
    vector<int> v {1,2,3,4,5,6,7,8,9};
    cout << "avant : " ;
    afficher(v);

    rotateRight(v);

    cout << "apres : " ;
    afficher(v);
}


