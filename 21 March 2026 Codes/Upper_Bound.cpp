#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter the length of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value: ";
    cin>>x;
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>x)
        {
            cout<<"Upper bound is at "<<i;
            found=1;
            return 0;
        }
    }
    if(found ==0)
    {
        cout<<"Upper bound is at hypothetical index: "<<n;
    }
    return 0;
}