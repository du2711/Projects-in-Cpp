#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    int l,r;
    cout<<"Enter from where you want the total: ";
    cin>>l ;
    cout<<endl<<"Enter to where you want the total: ";
    cin>>r;

    int sum=0;
    if(l>=1 && r<=n && l<=r){
        for(int i=l-1;i<=r-1;i++){
            sum+=v[i];
        }
        cout<<"Sum is: "<<sum;
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}
