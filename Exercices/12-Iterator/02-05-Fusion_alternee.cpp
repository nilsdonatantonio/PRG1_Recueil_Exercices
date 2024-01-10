//
// Created by Nils on 10.01.2024.
//
#include <iostream>
#include <vector>
#include <array>
#include <span>

using namespace std;

template <typename T, typename Iterator1, typename Iterator2>
vector<T> merge(Iterator1 first1, Iterator1 last1, Iterator2 first2, Iterator2 last2){
    vector<T> result(distance(first1, last1) + distance(first2, last2));

    typename vector<T>::iterator it = result.begin();

    int val = 0;

    while(first1 != last1 and first2 != last2){
        *it++ = *first1++;
        *it++ = *first2++;

    }

    if(first1 == last1){
        while(first2 != last2){
            *it++ = *first2++;
        }

    }else {
        while(first1 != last1){
            *it++ = *first1++;
        }

    }

    return result;
}

template <typename T>
ostream& operator<< (ostream& os, span<T> s){
    os << "[";
    for(size_t i = 0 ; i < s.size() ; ++i){
        if(i) os << ",";
        os << s[i];
    }
    os << "]";

    return os;

}

int main(){
    vector<int> v{11,12,13};
    array<int, 5> a{21,22,23,24,25};

    cout << "vector     : " << span<int>(v) << endl;
    cout << "array      : " << span<int>(a) << endl;

    vector result = merge<int>(v.begin(), v.end(), a.begin(), a.end());

    cout << "result     : " << span<int>(result);
}