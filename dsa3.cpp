#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main() {
 int arr[10] ;
 int i;
 string temp[10];
 
 cout<<"enter ten consecutive numbers : "<<endl;
 for (int i=0;i<10;i++) {
    cin>>arr[i];
 }
 for (i=0;i<10;i++)
 {
    bitset<10> bhati(arr[i]);
    temp[i] = bhati.to_string();
 }
 for(i=0;i<9;i++){
       if(temp[i][9] == temp[i+1][9]){
    cout<<"Missing number is " <<arr[i]+1<<endl;     
    }
 }
 return 0;
}
