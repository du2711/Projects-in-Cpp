#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n;
    cout<<"Enter no. of Elements: ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter your Elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your Elements are: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int sorted = true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            sorted=false;
            break;
        }
    }

    cout<<endl;
    if(sorted) cout<<"Array is sorted";
    else cout<<"Array is not sorted";

    return 0;
}