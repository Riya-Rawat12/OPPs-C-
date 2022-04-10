#include <iostream>
using namespace std;

namespace a
{
   int sum()
   {
       int x,y;
       cout << "Input the no.s\n";
       cin >> x >> y;
       return x+y;
   }
}
namespace b
{
    int sum()
    {
        int x,y;
       cout << "Input the no.s\n";
       cin >> x >> y;
       return x+y;
    }
}
int main()
{
    cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    int sum1,sum2;
    sum1 = a::sum();
    sum2 = b::sum();
    cout << "Sum of namespace a: " << sum1 << endl;
    cout << "Sum of namespace b: " << sum2;
}
