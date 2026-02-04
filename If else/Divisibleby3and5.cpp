#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    if(x%15==0) {
        cout<<"Divisible by 3 and 5";
    }
    else {
        cout<<"Not divisible by 3 and 5";
    }
}