#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x;
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
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]>=x)
    //     {
    //         cout<<"Lower bound is "<<i<<endl;
    //     }
    //     else
    //     {
    //         cout<<"Lower bound is at hypothetical index: "<<n<<endl;
    //         break;
    //     }
    // }
    int found = 0; // Flag to check if we found the lower bound
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= x)
        {
            cout << "Lower bound is " << i;
            found = 1; 
            break; // Stop immediately once found
        }
    }

    if(found == 0) // If the loop finished without finding an element >= x
    {
        cout << "Lower bound is at hypothetical index: " << n;
    }
    return 0;
}