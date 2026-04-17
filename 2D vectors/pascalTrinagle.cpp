#include<iostream>
#include<vector>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    else return n*(fact(n-1));
}

int comb(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){ 
    int n;
    cout<<"Enter upto digit: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int pas=comb(i,j);
            cout<<pas<<" ";
        }
        cout<<endl;
    }

    return 0;
}