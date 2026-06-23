#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> &arr,int idx){
    if(idx==arr.size()) return;
    cout<<arr[idx]<<" " ;
    printArr(arr,idx+1);
}

int main(){ 
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;

    vector<int> arr;
    int ele;
    cout<<"Enter array (Press enter to stop): ";
    while(cin.peek() !='\n' && cin>>ele){
        arr.push_back(ele);
    }

    cout<<"Elements are: ";
    for(int ele:arr){
        cout<<ele<<" ";
    }

    cout<<endl;
    printArr(arr,0);
    return 0;
}