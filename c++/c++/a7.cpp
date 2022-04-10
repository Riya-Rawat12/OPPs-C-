#include<bits/stdc++.h>
using namespace std;
class enter
{
    public:
    string s;
    string *p=&s;
    void get_string()
    {
        cout<<"Enter the string"<<endl;
        cin>>s;
    }
    enter()
    {
        cout<<"Constructor called"<<endl;
    }
    ~enter()
    {
        cout<<"Destructor called"<<endl;
        delete p;
        cout<<"Deleted";
    }
};
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
     enter e1;
     e1.get_string();
}