#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((j+i)%2==0) cout<<"1 ";
            else cout<<"2 ";
        }
        cout<<endl;
    }
}