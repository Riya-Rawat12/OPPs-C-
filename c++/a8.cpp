#include <iostream>
using namespace std;
class student
{
    public:
    int *a,b;

    student()
    {
        b = 0;
        a = &b;
    }
    student(student &s)
    {
        b = 1;
        a = &b;
    }
};
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    student s;
    student sc = s;
    cout << *(s.a) << s.b << endl;
    cout << *(sc.a) << sc.b;
}