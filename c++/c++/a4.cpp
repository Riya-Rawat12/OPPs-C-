#include <iostream>
#include <cstring>
using namespace std;

int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    string s1,s2;
    cout << "Enter two Strings\n";
    cin >> s1 >> s2;
    int l1,l2;
    l1 = s1.length();
    l2 = s2.length();
    string L = s2,s = s1;
    if(l1 > l2)
    {
        int t = l2;
        l2 = l1;
        l1 = t;
        L = s1;
        s = s2;
    }
    for(int i = 0;i<l1;i++)
           for(int j = 0;j<l2;j++)
             if(s[i] == L[j])
               {
                   L[j] = '*';
                   cout << s[i];
                   break;
               }
}