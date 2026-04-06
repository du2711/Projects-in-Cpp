#include<iostream>
#include<vector>
using namespace std;

int sq(int &a){return a*a;}
void reverse(vector<int> &v){
    int i=0,j=v.size()-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

void sortedSquareArray(vector<int> &v){
    vector<int> ans;

    int i=0,j=v.size()-1;
    while(i<=j){
        if(abs(v[i])<abs(v[j])){
            ans.push_back(sq(v[j]));
            j--;
        }
        else{
            ans.push_back(sq(v[i]));
            i++;
        }
    }
    reverse(ans);
    cout<<endl<<"Updated array: ";
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter your sorted array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Your array: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    sortedSquareArray(v);
    
    return 0;
}