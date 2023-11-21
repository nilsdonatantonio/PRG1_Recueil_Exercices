//
// Created by enigma on 19.11.23.
//

#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string_view mot){
    string base_word(mot);
    string reverse_word;
    for(int i = base_word.length() -1 ; i >= 0 ; i--){
        reverse_word.push_back(base_word[i]);
    }
    if(base_word == reverse_word){
        return true;
    }
    return false;
}
int main(){
    string mot;
    do {
        cout << "Entrez un mot (ou 'quitter' pour sortir) : ";
        getline(cin, mot);
        bool palindrome = isPalindrome(mot);
        if(palindrome){
            cout << "Le mot '" << mot << "' est un palindrome" << endl;
        }else {
            cout << "Le mot '" << mot << "' n'est pas un palindrome" << endl;
        }


    }while(mot != "quitter" or !isPalindrome(mot));
}