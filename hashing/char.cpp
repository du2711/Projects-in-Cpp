#include<iostream>
#include<vector>
using namespace std;

int hashh[256];
int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    char arr[n];
    cout<<"Enter your elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]-'a';
    }

    for(int i=0;i<n;i++){
        hashh[i]=char(arr[i]+1);
    }

    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;

    while(q--){
        int num;
        cout<<"Enter query: ";
        cin>>num;
        cout<<hashh[num];
    }
    return 0;
}