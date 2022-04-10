#include<iostream>
using namespace std;

class Array
{
    private:
    int arr[10];

    public:
    void create(int index,int data)
    {
        arr[index]=data;
    }

    int operator[](int index)
    {
        return arr[index];
    }
};

int main()
{
    Array a1;
    for(int i=0;i<10;i++)
    {
        a1.create(i,10*(i+1));
    }
    for(int i=0;i<10;i++)
    {
        cout<<a1.operator[](i)<<" ";
    }
}