#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age<=18)
    {
        cout<<"You can not vote";
    }
    else if(age>150)
    {
        cout<<"Invalid age";
    }
    else{
        cout<<"YOU can vote";
    }
}