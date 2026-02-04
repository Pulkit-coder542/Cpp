#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    if(x>=100 and x<1000) {
        cout<<"It is three digit number";
    }
    else if(x<100 and x>0) {
        cout<<"It is not a three digit number";
    }
    else{
        cout<<"Invalid";
    }
}