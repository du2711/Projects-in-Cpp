#include<iostream>
#include<vector>
using namespace std;

void reverse(int arr[],int n,int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){ 
    int n;
    cout<<"Enter siz eof array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter your Array: "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your entered array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int t;
    cout<<endl<<"Enter rounds of rotation: ";
    cin>>t;
    t=t%n;

    reverse(arr,n,0,n-1);
    reverse(arr,n,0,t-1);
    reverse(arr,n,t,n-1);

    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}