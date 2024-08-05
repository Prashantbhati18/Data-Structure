#include<iostream>
using namespace std;
int main() {
    float vel;
    int count = 0;
    cout <<"enter the dropping velocity : "<<endl;
    cin>>vel;
    while(vel != 0){
       
        count = count + 1;
        vel = vel/2;
    }
    cout<<"Number of tappe = "<<count;
    
    return 0;
}
