#include<iostream>
#include<vector>
using namespace std;
int mini(int a,int b){
    if(a<b) return a;
    else return b;
}

int frogJump(vector<int> &arr,int idx){
    if(idx==arr.size()-1) return 0;
    if(idx==arr.size()-2) return frogJump(arr,idx+1) +abs(arr[idx]-arr[idx+1]);
    return mini(frogJump(arr,idx+1)+ abs(arr[idx]-arr[idx+1]) , frogJump(arr,idx+2)+ abs(arr[idx]-arr[idx+2]));
}

int main(){ 
    vector<int> arr;
    arr = {10,30,40,20};
    cout<<"Minimum cost: ";
    cout<<frogJump(arr,0);
    return 0;
}