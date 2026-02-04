#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"cost price";
    cin>>a;
    cout<<"selling price";
    cin>>b;
    if(a>b) {
        cout<<"Loss";
    }
    else if(a<b) {
        cout<<"Profit";
    }
    else if(a==b) {
        cout<<"Neither profit nor loss";
    }
    return 0;
}