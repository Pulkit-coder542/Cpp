#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter which root do you want ";
    cin>>n;
    for(int i=0; i<x; i++)
    {
        int y= i^n;
        if(y==x)
        {
            cout<<i;
        }
    }
}