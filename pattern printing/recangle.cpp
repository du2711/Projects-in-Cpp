#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"enter length: ";
    cin>>l;

    cout<<"Enter breadth: ";
    cin>>b;

    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
