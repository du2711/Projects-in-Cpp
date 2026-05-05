#include<iostream>
#include<vector>
using namespace std;

int preSum(vector<vector<int>> v,int r1,int r2,int c1,int c2){
    int rows=v.size();
    int cols=v[0].size();

    for(int i=0;i<rows;i++){
        for(int j=1;j<cols;j++){
            v[i][j] = v[i][j] + v[i][j-1];
        }
    }

    int sum=0;
    for(int i=r1;i<=r2;i++){
        if(c1!=0) sum+=v[i][c2]-v[i][c1-1];
        else sum+=v[i][c2];
    }

    return sum;
}

int sum(vector<vector<int>> v,int r1,int r2,int c1,int c2){
    int sum=0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum=sum+v[i][j];
        }
    }
    return sum;
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

    cout<<endl;
    int r1,r2,c1,c2;

    cout<<"Enter starting row index: ";
    cin>>r1;

    cout<<"Enter ending row index: ";
    cin>>r2;

    cout<<"Enter starting column index: ";
    cin>>c1;

    cout<<"Enter ending column index: ";
    cin>>c2;

    int ans = preSum(arr,r1,r2,c1,c2);

    cout<<endl<<"Sum is: "<<ans;

    return 0;
}