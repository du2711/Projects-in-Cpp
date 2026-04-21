#include<iostream>
#include<vector>
using namespace std;

void wave(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            
        }
    }
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

    cout<<"Entered Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}