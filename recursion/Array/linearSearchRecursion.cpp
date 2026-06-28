#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr,int idx,int target){
    if(idx==arr.size()) return -1;
    if (arr[idx]==target) return idx;
    return linearSearch(arr,idx+1,target);
}

int main(){ 
    vector<int> arr;

    cout<<"Enter array: ";
    int ele;
    while(cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }
    
    int t;
    cout<<"Enter target: ";
    cin>>t;

    int res = linearSearch(arr,0,t);

    if(res==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found on Index: "<<res;
    }

    return 0;
}