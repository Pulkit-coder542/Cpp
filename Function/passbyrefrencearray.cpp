#include<iostream>
using namespace std;
void doSomething(int arr[], int n)
{
    arr[4] +=100;
    cout<<"Value inside function:"<<arr[4]<<endl;
}
int main()
{
    int n=5;
    int arr[n];
        for(int i=0;i<n;i=i+1) {
        cin>>arr[i];
    }
    doSomething(arr , n);

    cout<<"Value inside int main:"<<arr[4]<<endl;
    return 0;
}