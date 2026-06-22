#include<iostream>
#include<vector>
using namespace std;

int power(int b,int p){
    if(p==0 || p==1) return b;
    else return b*power(b,p-1);
}

int main(){ 
    int b,p;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter poewr: ";
    cin>>p;

    cout<<power(b,p);
    return 0;
}