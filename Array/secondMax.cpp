#include<iostream>
#include<vector>
#include<climits>
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
    cout<<"Your Entered Array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int max = INT_MIN;
    int secmax=INT_MIN;

    for(int i=0;i<n;i++){
        if(v[i]>max){
            secmax=max;
            max=v[i];
        }
        else if(v[i]>secmax && v[i]!=max){
            secmax=v[i];
        }
    }

    cout<<endl<<"second max element is: "<<secmax;
    return 0;
}