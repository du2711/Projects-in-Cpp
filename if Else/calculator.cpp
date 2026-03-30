#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    char choice;
    cout<<"Enter your choice: "<<endl;
    cout<<"1.Addition "<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter option number only: ";
    cin>>choice;

    switch (choice)
    {
    case '1': cout<<"Addition: "<<a+b; break;
    case '2': cout<<"Subtraction: "<<a-b; break;
    case '3': cout<<"Multliplication: "<<a*b; break;
    case '4': cout<<"Division: "<<a/b; break;
    default: cout<<"Enter valid input"; break;
    }

    return 0;
}