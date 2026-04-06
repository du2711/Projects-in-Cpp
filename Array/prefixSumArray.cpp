#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Your enterd array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"Updated array: ";
    prefixSum(v);
    return 0;
}