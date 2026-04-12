#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    int r,c,l;
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    cout<<"Enter no. of layered length: ";
    cin>>l;

    cout<<"Enter your matrix: ";
    int arr[l][c][r];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                cin>>arr[i][j][k];
            }
        }
    }
    cout<<"Your Enterd Array is: "<<endl;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

