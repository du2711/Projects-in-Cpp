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
    cout<<"Found on: "<<endl;
    for(int i=0;i<n-2;i++){
        for(int j=1;j<n-1;j++){
            for(int k=2;k<n;k++){
                if(v[i]+v[j]+v[k]==t){
                    found = true;
                    cout<<i<<", "<<j<<" and "<<k<<" as "<<v[i]<<", "<<v[j]<<" and "<<v[k]<<endl;
                    num++;
                }
            }
        }
    }

    if(found == true) cout<<endl<<"Total pairs found: "<<num;
    else cout<<"No pairs found";
    return 0;
}