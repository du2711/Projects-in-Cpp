#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> &arr,int idx){
    if(idx==arr.size()-1) return arr[idx];
    else return arr[idx]+sum(arr,idx+1);
}

int main(){ 
    vector<int> arr;
    int ele;
    cout<<"Enter Elements(press enter when done): ";
    while(cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }
    cout<<"Entered elements are : ";
    for(int ele:arr){
        cout<<ele<<" ";
    }

    cout<<endl;
    cout<<"Sum is : ";
    cout<<sum(arr,0);
    return 0;
}