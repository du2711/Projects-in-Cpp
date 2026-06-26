#include<iostream>
#include<vector>
using namespace std;

int power(int a,int b){
    if(b==0) return 1;
    int half=power(a,b/2);

    if(b%2==0) return half*half;
    else return a*half*half;
}

bool armstrong(int a){
    int arm=a;
    int digit=0;

    int temp=a;
    while(temp!=0){
        digit++;
        temp/=10;
    }

    int sum=0;
    while(a!=0){
        int remain;
        remain=a%10;
        sum=sum+power(remain,digit);
        a/=10;
    }
    
    if(arm==sum) return true;
    else return false;
}

int main(){ 
    int a;
    cout<<"Enter your number: ";
    cin>>a;

    if(armstrong(a)) cout<<"This number is armstrong";
    else cout<<"Not armstrong number";

    return 0;
}