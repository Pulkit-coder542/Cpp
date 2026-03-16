/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6]={3,2,1,7,5,6};
    sort(arr, arr+6);
    cout<<"Largest element of given array is: "<<arr[5];
    return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
    int largest, arr[6]={3,21,23,43,21,34};
    largest=arr[0];
    for(int i=0; i<=5; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Largest element of given array is: "<<largest;
    return 0;
}