#include <iostream>
#include <stdlib.h>
using namespace std;
int print1d(int *arr, int n)
{
    for(int i = 0;i<n;i++)
    cout << *(arr+i) << "\n";
    return 1;
}
int print2d(int **arr, int r, int c)
{
    int sum = 0;
    for(int i = 0;i<r;i++)
     for(int j = 0;j<c;j++)
     sum = sum + arr[i][j];
    
    cout << "SUM : " << sum;
     return 1;
}
int main()
{
     cout<<"Riya Rawat , Student ID_20012105, Section-E"<<endl;
    int a[10];
    int *p = a;
    cout << "Input 10 numbers\n";
    for(int i = 0;i<10;i++)
    cin >> *(p+i);
    print1d(p,10);
    

    cout << "Enter 10 numbers\n";
    int** arr = new int*[5];                

     for(int i=0; i<5; i++)
        arr[i] = new int[2];
     
     for(int i=0; i<5; i++)
         for(int j=0; j<2; j++)
             cin >> arr[i][j];
    print2d(arr,5,2);
}
