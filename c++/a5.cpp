#include <iostream>
using namespace std;
inline long long Pow(int n, int p)
{
    if(p)
    return n*Pow(n,p-1);
    else
    return 1;
}
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    int n,p;
    cout << "Enter a no. and power\n";
    cin >> n >> p;
    cout << Pow(n,p);
}