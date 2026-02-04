#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age";
    cin>>age;
    if(age<18)
    cout<<"not eligible for job";
    else if(age<=57)
    cout<<"eligible for job";
    if(age>=55)
    cout<<", but retierment soon.";
    else if(age>57)
    cout<<"retierment time";
}