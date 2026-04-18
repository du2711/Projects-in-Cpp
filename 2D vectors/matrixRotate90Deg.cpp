#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &v){
    
}

vector<vector<int>> reverse(vector<vector<int>> &v){

}

int main(){ 
    int r,c;
    cout<<"Enter size of row: ";
    cin>>r;
    cout<<"Enter size of column: ";
    cin>>c;

    vector<vector<int>> arr(r,vector<int>(c));

    cout<<"Enter Your Matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enterd Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    transpose(arr);
    reverse(arr);

    cout<<"Rotated Matrix is: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}