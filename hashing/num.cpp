#include<iostream>
#include<vector>
using namespace std;
int hashh[100];

int main(){ 
    int n;
    cout<<"Enter no. of element: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        hashh[arr[i]]++;
    }

    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;

    while(q--){
        int num;
        cout<<"Enter query: ";
        cin>>num;
        cout<<hashh[num]<<endl;
    }

    return 0;
}