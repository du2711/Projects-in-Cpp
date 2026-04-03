#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your Entered Array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int oddsum=0,evensum=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) evensum+=v[i];
        else oddsum+=v[i];
    }

    int diff=oddsum-evensum;
    cout<<endl<<"Difference is: "<<abs(diff);
    return 0;
}