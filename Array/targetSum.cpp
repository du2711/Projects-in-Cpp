#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your Entered array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int t;
    cout<<endl<<"Enter target number: ";
    cin>>t;

    bool found = false;
    int num=0;
    cout<<"found on: "<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(v[i]+v[j]==t){
                found = true;
                cout<<i<<" and "<<j<<" as "<<v[i]<<" and "<<v[j]<<endl;
                num++;
            }
        }
    }

    cout<<endl<<"Total pairs found: "<<num;

    return 0;
}