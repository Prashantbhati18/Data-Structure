#include<iostream>
using namespace std;
int main () {
    int a , n;
    
    int ans=1;
    cout << " Enter the value of number :"<<endl;
    cin>>a;
    cout<<"Enter the value of power : "<<endl;
    cin>>n;
    if (n/2==0){
        for (int i=0;i<n/2;i++) {
            ans=ans*a;
        }
        cout<<"final answer is : " <<ans<<endl;
    }
    else {
        for (int i=0;i<n;i++) {
            ans=ans*a;
        }
        cout<<"Final answer is : "<<ans<<endl;
    }
}
