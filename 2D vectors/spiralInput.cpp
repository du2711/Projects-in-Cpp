#include<iostream>
#include<vector>
using namespace std;

int sqr(int n){
    return n*n;
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<vector<int>> arr(n,vector<int>(n));
    int top=0,bottom=n-1;
    int left=0,right=n-1;
    int totalElement = n*n;   // Also could have used function but this was easier

    cout<<"Enter elements: ";
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cin>>arr[top][i];
        }
        top++;

        for(int i=top;i<=bottom;i++){
            cin>>arr[i][right];
        }
        right--;

        for(int i=right;i>=left;i--){
            cin>>arr[bottom][i];
        }
        bottom--;

        for(int i=bottom;i>=top;i--){
            cin>>arr[i][left];
        }
        left++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}