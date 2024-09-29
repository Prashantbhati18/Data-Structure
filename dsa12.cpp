// pushAtBottom amd reverse a stack //

#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s , int val) {
    if (s.empty()){
        s.push(val);
        return ;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s , int val);
    s.push(temp); 
}

void reverse (stack<int> &s) {
    if (s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}

void printStack(stack<int> s) {
     while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}

int main () {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    
    pushAtBottom(s,4);

    printStack(s);

    reverse(s);

    printStack(s);   
    return 0;
}
