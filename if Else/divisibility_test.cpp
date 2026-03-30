#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter divisor: ";
    cin>>a;
    cout<<"Enter dividend: ";
    cin>>b;

    if(b%a==0) cout<<"Divisible";
    else cout<<"Not Divisible";
    return 0;
}
