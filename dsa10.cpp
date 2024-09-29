//STACK USING VECTOR //

#include<iostream>
#include<vector>
using namespace std;

template<class T>;
class Stack {
    vector<T> vec;

public:
    void push(T val) {
        vec.push_back(val);
    }

    void pop () {
        if (isEmpty()) {
            cout<<"the stack is empty\n";
            return ;
        }
        vec.pop_back();
    }

    T top() {
         if (isEmpty()) {
            cout<<"the stack is empty\n";
            return -1;
        }
        int lastidx = vec.size()-1;
        return vec[lastidx];
    }

    bool isEmpty () {
        return vec.size() == 0;

};

int main () {
    Stack<char> s;//we have to define the type of stack;
    s.push('a'); 
    s.push('b'); 
    s.push('c'); 
    s.push('d'); 

    while (!s.isEmpty()) {
        cout << s.top()<<" ";
        s.pop();
    }

    return 0;
}
