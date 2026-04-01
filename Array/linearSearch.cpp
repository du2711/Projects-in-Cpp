#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter your Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int t;
    cout<<"Enter target element you want to find: ";
    cin>>t;

    int i,found=0;
    for(i=0;i<n;i++){
        if(arr[i]==t) found=1;
        break;
    }

    if(found==1) cout<<"Element found on index: "<<i-1;
    else cout<<"Element not found";
    return 0;
}