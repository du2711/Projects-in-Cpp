#include<iostream>
#include<vector>
using namespace std;

bool powerOf4(int n){
    return n>0 && (n&(n-1))==0 && ((n-1)%3==0);
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<powerOf4(n);

    return 0;
}