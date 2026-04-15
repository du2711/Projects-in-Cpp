#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;

    int arr[r][c];

    cout<<"Enter your Matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Entered Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int trans[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=arr[i][j];
        }
    }

    cout<<"Transposed Matrix: "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}