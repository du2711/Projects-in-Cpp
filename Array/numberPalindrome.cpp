#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int original,reverse=0,remain;
    original=a;

    while(a!=0){
        remain=a%10;
        reverse=reverse*10+remain;
        a=a/10;
    }

    if(original==reverse) cout<<"Palindrome";
    else cout<<"Not a palindrome";
    return 0;
}