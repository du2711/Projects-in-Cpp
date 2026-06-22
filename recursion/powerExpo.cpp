#include<iostream>
#include<vector>
using namespace std;

int powerOp(int b,int p){
    if(p==0) return 1;
    if(p%2 ==  0){
        int res=powerOp(b,p/2);
        return res*res;
    }
    else{
        int res = powerOp(b,(p-1)/2);
        return b*res*res;
    }
}

int power(int b,int p){
    if(p==0 || p==1) return b;
    else return b*power(b,p-1);

    // if(p==0 || p==1) return b;
    // else {
    //     if(p%2==0) return power(power(b,p/2),2);
    //     else return power(power(b,(p-1)/2),2);
    // }
}

int main(){ 
    int b,p;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter poewr: ";
    cin>>p;

    cout<<powerOp(b,p);
    return 0;
}