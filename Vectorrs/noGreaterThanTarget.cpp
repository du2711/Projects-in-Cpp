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

    int t;
    cout<<endl<<"Enter target element: ";
    cin>>t;

    int occurence = 0;
    for(int i=0;i<n;i++){
        if(v[i]>t){ 
            occurence++;
            cout<<v[i]<<" ";
        }
    }

    cout<<endl<<"No. of elements: "<<occurence<<endl;

    return 0;
}