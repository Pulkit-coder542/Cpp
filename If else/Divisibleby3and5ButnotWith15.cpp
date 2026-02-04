#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if((x%3==0 or x%5==0) && x%15!=0) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}