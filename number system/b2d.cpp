#include<iostream>
using namespace std;

int power(int a,int b){
    int r=1;
    if (a==0) return 0;
    else if (b==0) return 1;
    else{
        for(int i=1;i<=b;i++){
            r=r*a;
        }
    }
    return r;
}
int main(){
    int n,m;
    cout<<"Enter your binary Number: ";
    cin>>n;

    int bs=0;
    int pos=0;
    while (n>0)
    {
        int digit = n%10;
        bs=bs+digit*power(2,pos);
        n=n/10;
        pos++;
    }
    
    cout<<"Decimal number is: "<<bs;

    // int ans=0,p=1;
    // while(n>0){
    //     int lastdigit= n%10;
    //     ans=ans+(lastdigit*p);
    //     p*=2;
    //     n=n/10;
    // }
    return 0;
}
