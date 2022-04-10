#include <iostream>
#include "factorial.h"
using namespace std;
using namespace factorial;
int permutation(int n, int r)
{
   return Factorial(n)/Factorial(n-r);
}
int combination(int n, int r)
{
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    int n,r;
    cout << "Enter n & r\n";
    cin >> n >> r;
    int P = permutation(n,r);
    int C = combination(n,r);
    cout << "Permutation of " << n << " & " << r <<" : " << P << endl;
    cout << "Combination of " << n << " & " << r <<" : " << C ;
}
