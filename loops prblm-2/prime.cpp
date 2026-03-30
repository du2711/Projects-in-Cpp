#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your no.: ";
    cin>>n;

    int prime=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            prime=1;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    if(n==1) cout<<"Enter a valid input";
    else if(prime==0) cout<<"It is prime number";
    else cout<<"It is a composite number";
    return 0;
}