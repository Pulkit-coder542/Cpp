#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a no.";
    cin>>x;
    if(x>=0) {
        cout<<x;
    }
    else if(x<0) {
        cout<<-x;
    }
}