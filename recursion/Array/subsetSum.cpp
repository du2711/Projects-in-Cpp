#include<iostream>
#include<vector>
using namespace std;


int main(){ 
    vector<int> arr;
    int ele;
    while (cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(i!=j){
                cout<<'0'<<" "<<arr[i]<<" "<<arr[j];
                cout<<" "<<arr[i]+arr[j]<<" ";
            }
        }
    }
    
    return 0;
}