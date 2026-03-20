#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter  a string : ";
    cin>>s;
    int hash[26]={0};
    for(int i=0; i<=s.size(); i++)
    {
        hash[ s[i] -'a']++;
    }
    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;
    while(q--)
    {
        char x;
        cin>>x;
        cout<<x<<" is appearing "<<hash[x - 'a']<<" times in "<<s<<endl;
    }
    return 0;
}