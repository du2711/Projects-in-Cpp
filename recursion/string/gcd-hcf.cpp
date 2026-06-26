#include<iostream>
#include<vector>
using namespace std;

int hcf(int a,int b){
    // using euclid's algo
    // ----using division method
                    // if(a<b) return hcf(b,a);
    if(b==0) return a;
    return hcf(b, a%b);
}

int main(){ 
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<hcf(a,b);

    return 0;
}