#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> &arr,int idx,int n){
    if(idx==n) return;
    cout<<arr[idx]<<" " ;
    printArr(arr,idx+1,n);
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr;
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    cout<<"Elements are: ";
    for(int ele:arr){
        cout<<ele<<" ";
    }

    cout<<endl;
    printArr(arr,0,n);
    return 0;
}