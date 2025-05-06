#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    int salary;
};
int main()
{
    employee har;
    har.name="Paramita";
    har.salary=150000;
    cout<<"The name is "<<har.name<<endl;
    cout<<"Her salary is "<<har.salary;
}
