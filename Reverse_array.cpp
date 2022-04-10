#include<iostream>
using namespace std;

int main()
{ 
    int n=7;
    int arr[7];
    for(int i=0;i<7;i++)
    {
    cin>>arr[i];
    }
    for(int i=0;i<7;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[(n-1)-i];
        arr[(n-1)-i]=temp;
    }
    for(int i=0;i<7;i++)
    {
    cout<<arr[i]<<" ";
    }

}