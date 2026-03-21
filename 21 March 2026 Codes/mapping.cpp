#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    map<int, int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[a[i]]++;
    }
    int  q;
    cout<<"Enter the no. of queries: ";
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<mpp[x]<<" no. of times "<<x<<" is appearing in given array"<<endl;
    }
    return 0;
}