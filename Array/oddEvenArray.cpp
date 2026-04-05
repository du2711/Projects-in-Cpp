#include<iostream>
#include<vector>
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

    cout<<"Entered array: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    int i=0,j=n-1;
    while(i<j){
        if(v[i]%2==0) i++;
        else if(v[j]%2!=0) j--;
        else{
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    cout<<endl<<"Updated array: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}