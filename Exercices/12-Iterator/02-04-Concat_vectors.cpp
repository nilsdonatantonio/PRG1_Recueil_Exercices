//
// Created by Nils on 10.01.2024.
//
#include <iostream>
#include <vector>
#include <array>

using namespace std;

template <typename T, typename Iterator1, typename Iterator2>
vector<T> concat_tab(Iterator1 first1, Iterator1 last1, Iterator2 first2, Iterator2 last2){
    vector<T> result{};

    for(Iterator1 it1 = first1 ; it1 != last1 ; ++it1){
        result.push_back(*it1);
    }
    for(Iterator2 it2 = first2 ; it2 != last2 ; ++it2){
        result.push_back(*it2);
    }

    return result;
}

template <typename Iterator> void show(Iterator first, Iterator last){
    cout << "[";
    for(Iterator it = first ; it != last ; ++it){
        if(it != first) cout << ",";
        cout << *it;
    }
    cout << "]";
}

int main(){

    vector<int> v{11,12,13};
    array<int, 5> a{21,22,23,24,25};
    vector<int> result = concat_tab<int>(v.begin(), v.end(),a.begin(), a.end());

    cout << "vector    : " ; show(v.begin(), v.end());
    cout << "\n";
    cout << "array     : " ; show(a.begin(), a.end());
    cout << "\n";
    cout << "result    : " ; show(result.begin(), result.end());


}