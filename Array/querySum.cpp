#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n+1,0);
    cout<<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your eneterd array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;

    while(q--){
        int l,r;
        cout<<"Enter starting and ending index: ";
        cin>>l>>r;
        int ans=0;
        ans=v[r]-v[l-1];
        cout << "Sum from " << l << " to " << r << " = " << ans << endl;
    }
    return 0;
}















// int l,r;
    // cout<<"Enter from where you want the total: ";
    // cin>>l ;
    // cout<<endl<<"Enter to where you want the total: ";
    // cin>>r;

    // int sum=0;
    // if(l>=1 && r<=n && l<=r){
    //     for(int i=l-1;i<=r-1;i++){
    //         sum+=v[i];
    //     }
    //     cout<<"Sum is: "<<sum;
    // }
    // else{
    //     cout<<"Invalid Input";
    // }
