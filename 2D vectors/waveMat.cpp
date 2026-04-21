#include<iostream>
#include<vector>
using namespace std;

void waveRow(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int j=v[i].size()-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}

void waveCol(vector<vector<int>> &v){
    for(int j=0;j<v.size();j++){
        if(j%2==0){
            for(int i=0;i<v[j].size();i++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int i=v[j].size()-1;i>=0;i--){
                cout<<v[i][j]<<" ";
            }
        }
    }
    cout<<endl;
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

    cout<<"Enter Choice: "<<endl<<"1.Row"<<endl<<"2.Column"<<endl;
    int t;
    cin>>t;

    cout<<"Waved Matrix is: "<<endl;
    if(t==1) waveRow(arr);
    else if(t==2) waveCol(arr);
    else cout<<"Enter Valid Input";
    
    
    return 0;
}