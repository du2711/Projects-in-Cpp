#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> spiral(vector<vector<int>> &v){

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

    int totalElement = r*c;
    cout<<"Entered Matrix is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int minr=0,maxr=r-1,minc=0,maxc=c-1,count=0;

    while(count<totalElement){

        for(int j=minc;j<maxc;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        if(totalElement>=count) break;

        for(int i=minr;i<maxr;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        minc--;
        if(totalElement>=count) break;

        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j];
            count++;
        }
        maxr--;
        if(totalElement>=count) break;

        for(int i=minc;i<maxr;i++){
            cout<<arr[i][minc];
            count++;
        }
        minc++;
        if(totalElement>=count) break;
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