#include<iostream>
using namespace std;

void Swap(int &x,int &y);

int main()
{
    int x=20;
    int y=30;
    Swap(x,y);
    cout<<"Value of x after swapping: "<<x<<endl;
    cout<<"Value of y after swapping: "<<y<<endl;
    return 0;
}

void Swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}