#include<iostream>
#include<vector>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    else return n*(fact(n-1));
}

int comb(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> pascal(n);

    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);

        for(int j=0;j<i+1;j++){
            if(j==0 || j==i) pascal[i][j]=1;
            else pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
        }
    }
    return pascal;
}

int main(){ 
    int n;
    cout<<"Enter upto digit: ";
    cin>>n;

    vector<vector<int>> ans;

    ans = pascalTriangle(n);

    for(int i=0;i<ans.size();i++){
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(int i=0;i<n;i++){
    //     for(int k=0;k<n-i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=i;j++){
    //         int pas=comb(i,j);
    //         cout<<pas<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}