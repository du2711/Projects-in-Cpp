#include<iostream>
#include<vector>
using namespace std;

int digits(int a){
    int digit=0;
    while(a>0){
        digit++;
        a/=10;
    }
    return digit;
}

int power(int a,int b){
    if(b==0) return 1;
    int half=power(a,b/2);

    if(b%2==0) return half*half;
    else return a*half*half;
}

int arm(int a,int digit){
    if(a==0) return 0;
    else return power(a%10,digit) + arm(a/10,digit);
}
bool armst(int a){
    int digit = digits(a);
    return a==arm(a,digit);
}

bool armstrong(int a){
    int arm=a;
    int temp=a;
    
    int digit= digits(a);

    int sum=0;
    while(a!=0){
        int remain;
        remain=a%10;
        sum=sum+power(remain,digit);
        a/=10;
    }

    return arm==sum;
}

int main(){ 
    int a;
    cout<<"Enter your number: ";
    cin>>a;

    if(armst(a)) cout<<"This number is armstrong";
    else cout<<"Not armstrong number";

    return 0;
}