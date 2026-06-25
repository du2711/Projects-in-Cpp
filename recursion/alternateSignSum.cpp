#include<iostream>
#include<vector>
using namespace std;

// 1-2+3-4+5-6+7-8........................

int recursiveSum(int n){
    int odd=0,even=0;
    if(n==0) return 0;
    else{
        if(n%2==0) return recursiveSum(n-1) -n;
        else return recursiveSum(n-1) +n;
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

    cout<<recursiveSum(n);
    return 0;
}