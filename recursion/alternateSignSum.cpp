#include<iostream>
#include<vector>
using namespace std;

int recursiveSum(int n){
    if(n==0) return n;
    else{
        if(n%2==0)
    }
}

int iterationSum(int n){
    int odd=0;
    int even=0;

    for(int i=1;i<=n;i++){
        if(i%2!=0) odd+=i;
        else even+=i;
    }
    return (odd-even);
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<iterationSum(n);
    return 0;
}