#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;

    if(n%2==0) cout<<"Enter an odd number";
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==n/2 || j==n/2) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}