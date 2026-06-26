#include<iostream>
#include<vector>
using namespace std;

int gdc(int a,int b){
    int rem;
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

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

    cout<<gdc(a,b);

    return 0;
}