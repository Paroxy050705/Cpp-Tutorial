#include<iostream>
using namespace std;
int main()
{
    int marks[6];
    int i;
    for(i=0;i<=6;i++)
    {
        cout<<"The marks of "<<i<<"th student is:";
        cin>>marks[i];
    }

    //output
    for(i=0;i<=6;i++)
    {
        cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
    return 0;
}