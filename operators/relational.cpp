#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter one number: ";
    cin>>a;
    cout<<"Enter two number: ";
    cin>>b;

    cout<<a<<" is greater than "<< b<<": "<< (a>b);
    cout<<endl<<b<<" is greater than "<< a<<": " <<(a<b);
    cout<<endl<<a<<" and "<< b<<"equal"<<": "<< (a<b);
    return 0;
}