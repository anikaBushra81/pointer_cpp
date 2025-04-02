#include<iostream>
using namespace std;
int main()
{
    string name="ANika";
    string *ptr=&name;

    cout<<name<<endl;//value of name
    cout<<&name<<endl;//memory address of name
    cout<<*ptr<<endl;//// Access the memory address of name and output its value
    cout<<endl;

    *ptr="bushra";//assign new value of the pointer
    cout<<*ptr<<endl;
    cout<<name<<endl;

    return 0;
}
