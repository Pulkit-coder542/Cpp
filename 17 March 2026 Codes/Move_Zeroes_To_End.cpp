#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=-1, a[10]={1,2,0,23,231,97,0,0,123,123};
    for(i=0; i<=9; i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }
    for(i=j+1; i<=9; i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    cout<<"After shifting zeroes to end a[i] : {";
    for(i=0; i<=9;i++)
    {
        cout<<a[i];
        if(i<9)
        {
            cout<<",";
        }
    }
    cout<<"}";
    return 0;
}