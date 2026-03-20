#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0,a[10]={1,1,0,0,2,2,3,1,1,1};
    for(int i=0; i<=9; i++)
    {
        if(a[i]==1)
        {
            x++;
            y=x;
        }
        else{
            x=0;
        }
    }
    cout<<"Number of consecutive ones: "<<y;
    return 0;
}