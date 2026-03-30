#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    int sum=0;

    while(i <= n){
        sum+=i;
        i++;
    }
    cout<<"Sum is: "<<sum;
}
