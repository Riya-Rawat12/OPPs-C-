#include<iostream>
using namespace std;

class A
{
    int a1=2;
    friend void x(A obj);
};
void x(A obj)
{
    cout<<obj.a1;
}

int main()
{
    A obj;
    x(obj);
}