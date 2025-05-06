#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name="Paramita";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of name "<<name<<"is "<<name.length()<<endl;
    cout<<"The substring is "<<name.substr(0,4)<<endl;
    cout<<"The substring is "<<name.substr(2,5)<<endl;
}