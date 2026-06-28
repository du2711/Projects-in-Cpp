#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr,int idx,int target){
    if(idx==arr.size()) return 0;
    if (arr[idx]==target) return idx;
    return linearSearch(arr,idx+1,target);
}

int main(){ 
    vector<int> arr={10,20,30,40};
    int t=30;
    cout<<"Found on index: ";
    cout<<linearSearch(arr,0,t);
    return 0;
}