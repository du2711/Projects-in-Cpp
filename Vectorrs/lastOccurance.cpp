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
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==t) occurence=i;
        break;
    }

    cout<<occurence<<endl;

    return 0;
}