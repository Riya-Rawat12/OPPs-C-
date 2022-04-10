#include<iostream>
using namespace std;

class A
{
    int a;
    friend void x(A obj);
};

void x(A obj)
{
    cout<<obj.a<<endl;
}

int main()
{
    A obj;
    x(obj);
}