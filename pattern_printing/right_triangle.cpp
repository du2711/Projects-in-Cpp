#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}




// int n;
//     cout<<"Enter size: ";
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<n-i;k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;