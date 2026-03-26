#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        int low= 1, high=n;
        while (low<=high)
        {
            int mid = (low+high)/2;
            int val= mid*mid;
        if(val<=n)
            {
                low=mid+1;
            }
        else
            {
                high= mid-1;
            }
        }
        cout<<high;
        break;
    }
}