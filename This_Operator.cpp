#include<iostream>
using namespace std;

class Student{
   public:
   string name;
   int age;

    Student(string n,int a)
    {
        this->name=n;
        this->age=a;
    }
    void display(){
        cout<<"Name of the student is "<<name<<endl;
        cout<<"Age of the student is "<<age<<endl;
    }

};

int main()
{
Student s1("Maneesh",19);
s1.display();
return 0;
}
