#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void dutch(vector<int> &arr){
    int low=0,mid=0,high=arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]==1) mid++;

        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){ 
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements(0,1,2): ";
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }

    dutch(arr);

    cout<<"Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}