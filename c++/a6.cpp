#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int age;
    string dob;

    student()
    {
        dob="15 September 2002";
    }
    student(int Age,string str)
    {
        this->age=Age;
        this->name=str;
    }
};

int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    student s1(18,"Maneesh");
    student s2;
    cout<<"Age is:"<<s1.age<<endl;
    cout<<"Name is:"<<s1.name<<endl;
    cout<<"Dob is:"<<s2.dob<<endl;
}