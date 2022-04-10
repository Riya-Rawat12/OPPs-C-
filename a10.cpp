#include <iostream>
using namespace std;
class Person;
class a
{
    string s = "Riya";
    friend void display(Person A, a a1);
};
class Person
{
    int age = 20;
    friend void display(Person A, a a1);
};
void display(Person A, a s)
{
    cout << A.age<<endl;
    cout << s.s;
}
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    Person A;
    a s;
    display(A,s);
}