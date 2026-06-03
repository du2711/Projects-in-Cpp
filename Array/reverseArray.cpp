#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void reverse(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){ 
    int n;
    cout<<"Enter no. of Elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,n);

    cout<<"Output: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}