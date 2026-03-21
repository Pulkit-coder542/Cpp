#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4,5,6};
    vector<int> b={1,2,3,4,7,8,9,0};
    int n1= a.size();
    int n2= b.size();
    int i=0;
    int j=0;
    vector<int> UnionArr;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            if(UnionArr.size()==0 || UnionArr.back()!=a[i])
            {
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(UnionArr.size()==0 || UnionArr.back()!=b[j])
            {
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2)
    {
        if(UnionArr.size()==0 || UnionArr.back()!=b[j])
        {
            UnionArr.push_back(b[j]);
        }
        j++;
    }
    while(i<n1)
    {
        if(UnionArr.size()==0 || UnionArr.back()!=a[i])
        {
            UnionArr.push_back(a[i]);
        }
        i++;
    }
    cout<<"The Union Array : {";
    for(int i=0; i<UnionArr.size(); i++)
    {
        cout<<UnionArr[i];
        if(i<UnionArr.size()-1)
        {
            cout<<",";
        }
    }
    cout<<"}";
    return 0;
}