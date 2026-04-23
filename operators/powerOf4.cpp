#include<iostream>
#include<vector>
using namespace std;

bool powerOf4(int n){
    if (n%4==0 && ((n-1)%3==0)) return true;
    else return false;
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<powerOf4(n);

    return 0;
}