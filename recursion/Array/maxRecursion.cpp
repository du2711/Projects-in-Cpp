#include<iostream>
#include<vector>
using namespace std;

int maxEle(vector<int> &arr,int idx){
    if(idx==arr.size()-1) return arr[idx];
    return max(arr[idx],maxEle(arr,idx+1));
}

int main(){ 
    // int n;
    // cout<<"Enter number of element: ";
    // cin>>n;

    vector<int> arr;
    cout<<"Enter array: ";
    int ele;
    while(cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }

    cout<<"Maximum Element: "<<maxEle(arr,0);
    return 0;
}