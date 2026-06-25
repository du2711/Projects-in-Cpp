#include<iostream>
#include<vector>
using namespace std;

void n2one(int n){
    if(n==0) return;
    cout<<n<<" ";
    n2one(n-1);
}

void one2n(int n){
    if(n==0) return;
    one2n(n-1);
    cout<<n<<" ";
}


int main(){ 
    one2n(9);
    cout<<endl;
    n2one(9);
    return 0;
}