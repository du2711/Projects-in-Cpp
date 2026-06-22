#include<iostream>
#include<vector>
using namespace std;

int sumDigit(int n){
    if(n>0 && n<10) return n;
    else return (n%10)+ sumDigit(n/10);
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<sumDigit(n);
    return 0;
}