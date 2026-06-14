#include<iostream>
#include<vector>
using namespace std;

vector<int> sumArray(vector<int> &arr,vector<int> &brr){
    int i=arr.size()-1;
    int j=brr.size()-1;

    vector<int> res;

    while(i>=0 && j>=0){
        int ele=arr[i]+brr[j];
        res.push_back(ele);
        i--;
        j--;
    }

    return res;
}

int main(){ 
    int n;
    cout<<"Enter Size of array A: ";
    cin>>n;

    vector<int> arr;
    cout<<"Enter array A: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int m;
    cout<<"Enter Size of array B: ";
    cin>>m;

    vector<int> brr;
    cout<<"Enter array B: ";
    for(int i=0;i<m;i++){
        int ele;
        cin>>ele;
        brr.push_back(ele);
    }
    
    vector<int> res=sumArray(arr,brr);

    cout<<"Resultant Array";
    for(int ele:res){
        cout<<ele<<" ";
    }

    return 0;
}