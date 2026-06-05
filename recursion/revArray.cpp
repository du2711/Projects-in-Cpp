#include<iostream>
#include<vector>
using namespace std;

void swap(int &i, int &j){
    int temp=i;
    i=j;
    j=temp;
}

void rev(vector<int> &arr,int s,int e){
    if(s>=e) return;
    else{
        swap(arr[s],arr[e]);
        rev(arr,s+1,e-1);
        s++,e--;
    }
}

int main(){ 
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Entered Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    rev(arr,0,n-1);
    cout<<endl<<"reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}