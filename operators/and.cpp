#include<iostream>
#include<vector>
using namespace std;

bool power2(int &n){
    return (n&1)==0;
}

int main(){ 
    int n;
    cin>>n;

    cout<<endl<<power2(n);
    return 0;
}