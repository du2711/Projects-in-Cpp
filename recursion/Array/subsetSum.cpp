#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subset(vector<int> &arr,int idx,int sum,vector<int> &result){
    if(idx==arr.size()){
        result.push_back(sum);
        return;
    }
    subset(arr,idx+1,sum+arr[idx],result);
    subset(arr,idx+1,sum,result);
}

int main(){ 
    vector<int> arr;
    int ele;
    while (cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }

    vector<int> res; 
    subset(arr,0,0,res);

    sort(res.begin(),res.end());

    for(int ele : res){
        cout<<ele<<" ";
    }

    return 0;
}