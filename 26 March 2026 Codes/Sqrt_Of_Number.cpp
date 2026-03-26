#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
    if(i*i==n)
        {
            cout<<"Square root of given number is: "<<i;
        }
        else 
        {
            break;
        }
    }
}