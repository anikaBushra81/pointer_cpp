#include<iostream>
using namespace std;
int main()
{
    string name="Bushra"; // Variable declaration
    string *ptr =&name; // Pointer declaration
    cout<<name<<endl; //value of name
    cout<<&name<<endl; //memory address of name
    cout<<ptr<<endl; //(Reference)memory address of name with the pointer
    cout<<*ptr<<endl;// Dereference: Output the value of name with the pointer
    return 0;
}
