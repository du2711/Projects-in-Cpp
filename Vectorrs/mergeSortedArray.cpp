#include<iostream>
#include<vector>
using namespace std;

void mergeArray(vector<int> &arr,vector<int> &brr){
    int n=arr.size();
    int m=brr.size();

    vector<int> resArr(n+m);

    int left=0,right=0;
    int idx=0;

    while(left<n && right<m){
        if(arr[left]<=brr[right]){
            resArr[idx] = arr[left];
            left++,right++;
        }
        else{
            resArr[idx]=brr[right];
            right++,idx++;
        }
    }

    while(left<n){
        resArr[idx++]=arr[left++];
    }

    while(right<m){
        resArr[idx++]=brr[right++];
    }

    for(int i=0;i<n+m;i++){
        if(i<n) arr[i]=resArr[i];
        else brr[i-n]=resArr[i];
    }
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

    mergeArray(arr,brr);
    return 0;
}