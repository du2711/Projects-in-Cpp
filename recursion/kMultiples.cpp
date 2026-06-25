#include<iostream>
#include<vector>
using namespace std;

void kMultiple(int n,int k){
    if(k<1) return;
    kMultiple(n,k-1);
    cout<<(n*k)<<" ";
}

int main(){ 
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int k;
    cout<<"Enter gap: ";
    cin>>k;

    kMultiple(n,k);
    return 0;
}