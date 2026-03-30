#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int m=n,i=0;
    while(m>0){
        i++;
        m=m/10;
    }

    for(int j=0;j<i;j++){
        int r=n%10;
        cout<<r;
        n=n/10;
    }

    // int reverse=0;
    // while(n > 0) {
    //     int lastdigit = n % 10;    // extract last digit
    //     reverse = reverse * 10 + lastdigit;  // append digit to reversed number
    //     n /= 10;              // remove last digit
    // }

    return 0;
}