#include<iostream>
using namespace std;
int main()
{
    int a[200]={2,5,9,6,1,8,7};
    int n=7;
     cout<<"the list of three numbers are="<<endl;
    for(int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                if (a[i]+a[j]==a[k])
                {
                    cout<<a[i]<<"+"<<a[j]<<"="<<a[k];
                }
            }
        }
    }
    return 0;
}