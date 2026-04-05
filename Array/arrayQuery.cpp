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

    const int N = 1e5 +10; 
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    int q;
    cout<<"Enter total queries u want: ";
    cin>>q;

    while(q--){
        int queryElement;
        cout<<"Enter element for query: ";
        cin>>queryElement;
        cout<<queryElement<<" Occur "<<freq[queryElement]<<" Times "<<endl;
    }
    
    return 0;
}