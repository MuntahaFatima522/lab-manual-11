#include<iostream>
using namespace std;

int main()
{
    int x=20;
    int y=30;
    int *ptrX=&x;
    int *ptrY=&y;
    int temp=*ptrX;
    *ptrX=y;
    *ptrY=temp;
    cout<<"Value of x after swapping "<<x<<endl;
    cout<<"Value of y after swapping "<<y<<endl;
    return 0;
}