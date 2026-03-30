#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    int i=0;
    while(n>0){
        i++;
        n=n/10;
    }

    cout<<i;
    return 0;
}