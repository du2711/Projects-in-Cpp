#include<iostream>
using namespace std;

int main(){
    int b,p;
    cout<<"Enter Base: ";
    cin>>b;
    cout<<"Enter power: ";
    cin>>p;

    int result=1;
    for(int i=1;i<=p;i++){
        result = result * b;
    }
    cout<<"Answer is: "<<result;
    return 0;
}