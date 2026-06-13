#include<iostream>
#include<vector>
using namespace std;

void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}

void sort01(vector<int>& arr){
    int i=0,j=arr.size()-1;
    while(i<j){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j--;
        }
        else if(arr[i]==0) i++;
    }
}

int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> arr;
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    cout<<"Enterd array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    sort01(arr);

    cout<<endl<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}