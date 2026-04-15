#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;

    vector<vector<int>> arr(r,vector<int>(c));

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

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    cout<<"Transposed Matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}