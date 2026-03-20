#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]= {1,2,3,4,5};
    for(int i=0; i<=4; i++)
    {
        for(int j=i+1; j<=4; j++)
        {
            int z = a[i]+a[j];
            if(z==9)
            {
                int x=i;
                int y=j;
                cout<<x<<endl<<y;
                return 0;
            }
        }
    }
}