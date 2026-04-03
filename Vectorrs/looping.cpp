#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
        // cin>>v[i];
    }

    //insert
    v.insert(v.begin()+2,6);

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //Erase
    v.erase(v.end()-2);

    //for each loop

    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    //while loop

    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }

    return 0;
}