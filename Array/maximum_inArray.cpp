#include<iostream>
using namespace std;
int min(int arr[],int n){
    int min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }

    return min;
}
int max(int arr[],int n){
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }

    return max;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi= max(arr,n);
    int mini= min(arr,n);

    cout<<"Maximum element: "<<maxi<<endl;
    cout<<"Maximum element: "<<mini;
}