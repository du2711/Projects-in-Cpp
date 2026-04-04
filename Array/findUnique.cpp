#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your eneterd array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    int unique=0;
    for(int i=0;i<n;i++){
        unique = unique^v[i];
    }

    cout<<"unique element is: "<<unique;
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(v[i]==v[j]) count++;
    //     }
    //     if(count==1) cout<<"Unique element: "<<v[i];
    // }
    return 0;
}