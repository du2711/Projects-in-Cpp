#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }

    cout<<"Factorial is: "<<fac;
    return 0;
}
