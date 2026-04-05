#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter your Array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your entered array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    // int zero=0,one=0;
    // for(int i=0;i<n;i++){
    //     if(v[i]==0) zero++;
    //     else if(v[i]==1) one++;
    //     else cout<<endl<<"Only 1 and 0 are allowed";
    // }

    // cout<<endl<<"Output array is: ";
    // for(int i=0;i<zero;i++){
    //     cout<<"0 ";
    // }
    // for(int i=0;i<one;i++){
    //     cout<<"1 ";
    // }

    //ALTERNATE METHOD

    int i=0,j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else if(v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }

    cout<<endl<<"Updated array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }    
    return 0;
}