#include<iostream>
using namespace std;
// int sum(int n){
//     if (n==0) return 0;
//     else return n+sum(n-1); 
// }
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int s=0;
    for(int i=0;i<=n;i++){
        s=s+i;
    }

    cout<<"sum is: "<<s;
    return 0;
}