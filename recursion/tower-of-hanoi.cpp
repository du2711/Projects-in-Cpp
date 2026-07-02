#include<iostream>
#include<vector>
using namespace std;

int power(int b,int p){
    if(p==1) return b;
    if(p%2==0) {
        int res=power(b,p/2);
        return res*res;
    }
    else{
        int res= power(b,(p-1)/2);
        return b*res*res;
    }
}

int hanoi(int n){
    return power(n,2)-1;
}
int main(){ 
    int n;
    cout<<"Enter no of towers: ";
    cin>>n;

    cout<<hanoi(n);
    return 0;
}