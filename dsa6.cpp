#include<iostream>
using namespace std;

int binarySearch (int arr[],int low,int high,int x) 
{
    if (low==high){
        return low;
    }
    else {
       int mid=(low+high)/2;
       if (arr[mid]==x){
        return 1;
       }
        else if (arr[mid]>x){
            return binarySearch(arr,low,mid-1,x);
        }
        else {
            return binarySearch(arr,mid+1,high,x);
        }
    }
return -1;
}
int main(){
    int arr[10]={1,2,2,3,4,5,6,7,8,9};
    int x;
    cout<<"enter value of x:"<<endl;
    cin>>x;
    int y= binarySearch(arr,0,9,x);
    cout << y;
}
