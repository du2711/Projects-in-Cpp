#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> &v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    int preSum=0;
    for(int i=0;i<v.size();i++){
        preSum+=v[i];
        int suffSum=sum-preSum;

        if(suffSum==preSum) return true;
    }
    return false;
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

    if(check(v)) cout<<endl<<"Prefix sum equal to suffix sum is found";
    else cout<<endl<<"Prefix sum equal to suffix sum is NOT found";
    return 0;
}