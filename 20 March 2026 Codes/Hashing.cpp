#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element of array on index "<<i<<" : ";
        cin>>a[i];
    }
    int hash[9]={0};
    for(int i=0; i<n; i++)
    {
        hash[a[i]] += 1;
    }
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<"Frequency of "<<x<<" is "<<hash[x]<<endl;
    }
    return 0;
}