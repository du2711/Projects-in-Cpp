#include<iostream>
#include<vector>
using namespace std;

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

    int totalElement = r*c;
    int top=0,left=0,right=c-1,bottom=r-1;

    while(top<=bottom &&  left<=right){
        for(int i=top;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;

        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;

        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }

    // HARCODED FOR 3*3 MATRIX
    // cout<<"Spiraled Matrix is: ";
    // for(int i=0;i<r;i++){
    //     cout<<arr[i][0]<<" ";
    // }
    // for(int i=1;i<arr.size()-1;i++){
    //     for(int j=1;j<arr[i].size();j++){
    //         cout<<arr[c-1][j]<<" ";
    //     }
    // }
    // for(int i=arr.size()-2;i>=0;i--){
    //     cout<<arr[i][2]<<" ";
    // }
    // for(int i=0;i<=1;i++){
    //     cout<<arr[i][1]<<" ";
    // }
    return 0;
}