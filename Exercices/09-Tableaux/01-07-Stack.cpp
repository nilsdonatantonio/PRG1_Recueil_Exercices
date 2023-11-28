//
// Created by enigma on 25.11.23.
//
#include <iostream>
#include <array>

using namespace std;

struct Stack{
    size_t top;
    array<int,10> data;
};

void show_stack(Stack& s){
    cout << "size : " << s.data.size() << "\n";
    cout << "data : " << s.data.data() << endl;
}

bool is_stack_full(Stack& s){
    size_t comp = 0;
    for(auto& comp : s.data) ++comp;
    if(comp == s.data.size()){
        return true;
    }
    return false;
}

bool push(Stack& s, int& i){
    size_t comp = 0;
    while(comp != s.data.size()){
        s.data[comp] = i;
    }
}
bool top(Stack& s, int i){
    s.top = i;
}

int stack_size(Stack& s){
    return s.data.size();
}

bool is_stack_empty(Stack& s){
    size_t comp = 0;
    for(auto& comp :  s.data) ++comp;
    if(comp == 0){
        return true;
    }
    return false;
}

bool pop(Stack& s){
    s.data
}

int main()
{
    Stack s;

    show_stack(s);
    cout << endl;

    int i = 1;
    while (not is_stack_full(s)) {
        push(s, i*=2);
    }

    top(s, i);
    cout << "top  : " << i << endl;
    cout << "size : "; cout << stack_size(s) << endl;
    cout << endl;

    show_stack(s);
    cout << endl;

    while (not is_stack_empty(s)) {
        pop(s);
    }

    show_stack(s);
    cout << endl;
}
