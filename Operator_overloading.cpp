// #include<iostream>
// using namespace std;

// class A
// {
//     public:
//     int current_year;
//     int birth_year;
//     int age;
//     A operator-(A &obj)
//     {
//         A obj2;
//         obj2.age=age-obj.age;
//         return obj2;

//     }

// };

// int main()
// {
//     A a1,a2;
//     cout<<"age of a1 is"<<endl;
//     cin>>a1.age;
//     cout<<"age of a2 is"<<endl;
//     cin>>a2.age;
//     a1=a1-a2;
//     cout<<a1.age;
// }
#include<iostream>
using namespace std;

class A
{
    public:
    int a1=2;
    A operator++(int)
    {
        A obj;
        obj.a1=a1+1;
        return obj;
    }
};

int main()
{
    A obj;
    obj=obj++;
    cout<<obj.a1;
}
