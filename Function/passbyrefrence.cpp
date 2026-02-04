#include<iostream>
using namespace std;
void doSomething(string s) {
    s[0]='L';
    s[1]='u';
    s[2]='c';
    s[3]='k';
    s[4]='y';
    s[5]=' ';
    cout<<s<<endl;
}
int main() {
    string s = "Pulkit";
    doSomething(s);
    cout <<s << endl;
    return 0;
}