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

void insert(int arr[],int &n){
    int x,p;
    cout<<"Enter index where you want to insert the element: ";
    cin>>p;
    cout<<"Enter the element: ";
    cin>>x;
    for(int i=n;i>p;i--){
        arr[i]=arr[i-1];
    }
    arr[p]=x;
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

    insert(arr,n);

    output(arr,n);

    return 0;
}