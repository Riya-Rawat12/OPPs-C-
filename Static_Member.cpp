#include<iostream>
using namespace std;

class Person
{
    public:
    int a1=2;
    static int class_no;
};

int main()
{
    Person p1,p2;
    Person::class_no=32;
    cout<<p1.a1<<endl;
    cout<<p1.class_no<<endl;
}

