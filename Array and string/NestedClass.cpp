#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    int rollno;
    int class;
    char name[20];
    class Address
    {
        private:
        int Houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
        public:
        void setAddress(int h,char *s,char *c,char *st,char *p)
        {
            Houseno=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void showAddress()
        {
            cout<<"\n"<<houseno<<endl;
            cout<<street<<" "<<city;
            cout<<" "<<pincode<<endl;
            cout<<state;
        }
    };
    Address add;
    public:
    void setRollno(int r)
    {rollno=r;}
    void setName(char *n)
    {strcpy(name,n);}
    void setAddress(int h,char *s,char *c,char *st,char *p)
    {
        add.setAddress(h,s,c,st,p);
    }
    void showStudent()
    {
        cout<<"Student Data"<<endl;
        cout<<rollno<<" ";
        cout<<name<<" ";
        cout<<add.showData();

    }
};
int main()
{
    Student s1;
    s1.setRollno(100);
    s1.setName(Rahul);
    s1.setAddress(301,"hanuman gali","Bhopal","462042","M.P.");
    s1.showStudent();
}