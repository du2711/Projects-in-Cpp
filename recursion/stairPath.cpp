#include<iostream>
#include<vector>
using namespace std;

int stairCount(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    int s = stairCount(n-1)+stairCount(n-2);
    return s;
}

int main(){ 
    int n;
    cout<<"Enter number of stairs: ";
    cin>>n;

    cout<<stairCount(n);
    return 0;
}