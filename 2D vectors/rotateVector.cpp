#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void reverse(vector<int> &arr,int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){ 
    int n;
    cout<<"Enter size of Vector: ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int t;
    cout<<"Enter target rotate point: ";
    cin>>t;
    t=t%n;

    reverse(arr,0,n-1);
    reverse(arr,t,n-1);
    reverse(arr,0,t-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}