#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int &n,vector <int> &v,int item){
    int b=0,e=n-1;

    while(b<=e){
        int mid=(e+b)/2;
        if(item == v[mid]) return mid;
        else if(item>v[mid]) b=mid+1;
        else e=mid-1;
    }

    return -1;
}

int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter sorted elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Entered elements are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int t;
    cout<<endl<<"Enter element u want to find: ";
    cin>>t;

    int found=binarySearch(n,arr,t);

    if(found==-1) cout<<"Element not found";
    else cout<<"Found on index: "<<found;

    return 0;
}