//add 2 numbers
#include<iostream>
using namespace std;
int add(int a,int b); //declaration
int main()
{
    int a,b;

    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"The sum is:"<<add(a,b);  //calling
}

//definition
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}