#include<iostream>
#include<stdlib.h>
using namespace std;

class Student{
    string name;
    int age;

    public:
    Student()
    {
        cout<<"Constructor Called!!"<<endl;
    }
    Student(string n,int a)
    {
        this->name=n;
        this->age=a;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    void *operator new(size_t size)
    {
        cout<<"Overloading new operator with size"<<size<<endl;
        void*p=::operator new(size);
        return p;
    }

    void operator delete(void*p)
    {
        cout<<"Overloading  delete operator"<<endl;
        free(p);
    }

};

int main()
{
    Student *p=new Student("Maneesh",19);
    p->display();
    delete p;
}