#include<iostream>
using namespace std;
int main()
{
    int a=34;
    int *ptr;
    ptr=&a;
    cout<<a<<endl;  //34
    cout<<*ptr<<endl;  //34
    cout<<ptr<<endl;  //0x61234
    cout<<&a;   //0x61234
}