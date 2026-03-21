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
    int ans= n;
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(a[mid]>=x)
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid +1;
        }
    }
    cout<<"Lower bound is at "<<ans;
    return 0;
}