#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void transpose(vector<vector<int>> &v){
    int r= v.size();

    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            swap(v[i][j],v[j][i]);
        }
    }
}

vector<vector<int>> reverse(vector<vector<int>> &v){
    int r=v.size(),c=v[0].size();

    for(int i=0;i<r;i++){
        int start = 0, end=c-1;
        while(start<end){
            swap(v[i][start],v[i][end]);
            start++;
            end--;
        }
    }
    return v;
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

    transpose(arr);
    arr= reverse(arr);
    r = arr.size();
    c = arr[0].size();

    cout<<"Rotated Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}