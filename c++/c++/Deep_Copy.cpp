#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    int b;
    int *p=&b;
    public:
    A()
    {
        p=new int;
    }

    void setdata(int a1,int b1,int z)
    {
        a=a1;
        b=b1;
        *p=z;
    }

    void showdata()
    {
        cout<<a<<" "<<b<<" "<<*p<<endl;
    }
    A(A &obj)
    {
        a=obj.a;
        b=obj.b;
        *p=*(obj.p);
    }

    ~A()
    {
        delete p;
    }
};

int main()
{
    A obj1;
    obj1.setdata(12,14,16);
    obj1.showdata();
    A obj2;
    obj2=obj1;
    obj2.showdata();
}
