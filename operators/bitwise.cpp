#include<iostream>
using namespace std;

int main(){
    // a<< b -> a*2^b
    // a>> b -> a/2^b

    int m =5;
    cout<<(m<<1)<<endl;
    cout<<(m>>1)<<endl;

    int n=7;
    cout<<(m&n)<<endl;
    cout<<(m|n)<<endl;
    
    return 0;
}
