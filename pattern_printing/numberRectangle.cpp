#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter length: ";
    cin>>l;

    cout<<"Enter breadth: ";
    cin>>b;

    for(int i=1;i<=l;i++){
        for(int j=1;j<=b;j++){
            if(i==1||j==1||i==l||j==b) cout<<j;
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}