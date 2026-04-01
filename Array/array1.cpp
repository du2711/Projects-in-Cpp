// array store homogeneous items
// array are contegeous
// index -> location of an elemnent
// indexing starts from 0


#include<iostream>
using namespace std;

void input(int arr[],int n){
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void append(int arr[],int &n){
    cout<<"Enter last 1 element: ";
    cin>>arr[n];
    n++;
}

void output(int arr[],int n){
    cout<<"Your array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    input(arr,n);

    append(arr,n);

    output(arr,n);
    
    return 0;
}