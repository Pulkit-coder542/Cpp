#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter target element: ";
    cin>>x;
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            cout<<"Element found at index: "<<mid;
            return 0;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
            
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<"Element not found";
    return 0;
}