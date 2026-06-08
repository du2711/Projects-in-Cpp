#include<iostream>
#include<vector>
using namespace std;

pair <int,int> getIndex(string str,char ch){
    int last=-1,first =-1;
    for(int i=0;i<str.size();i++){
        if(str[i]==ch){
            first=i;
            break;
        }
    }
    for(int i=str.size();i>=0;i--){
        if(str[i]==ch){
            last=i;
            break;
        }
    }

    return {first,last};
}

int main(){ 
    string s;
    cout<<"Enter string: ";
    getline(cin,s);

    char c;
    cout<<"Enter character to find index: ";
    cin>>c;

    pair <int,int> occ = getIndex(s,c);
    cout<<"First on: "<<occ.first<<endl;
    cout<<"Last on: "<<occ.second<<endl;
    return 0;
}