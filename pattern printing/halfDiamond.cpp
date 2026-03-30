#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("* ");
        }
        cout<<endl;
    }
    return 0;
}