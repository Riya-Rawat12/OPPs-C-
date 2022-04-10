#include <iostream>
using namespace std;
class age
{
    public:
    int Age;
    
    age()
    {
        cout << "Enter age of person\n";
        cin >> Age;
    }
    friend int operator+(age&, age&);
};
int operator +(age &P1, age &P2)
{    
    int P = P1.Age + P2.Age;
    return P; 
}
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    age P1;
    age P2;
    int P = P1 + P2;
    cout << "Age is: "<< P;       
}