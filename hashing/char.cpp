#include<iostream>
#include<cctype>
using namespace std;

int main(){ 
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int hashFreq[26]={0};

    for(int i=0;i<s.size();i++){
        hashFreq[s[i]-'a']++;
    }

    int q;
    cout<<"Enter no. of queries: ";
    cin>>q;
    while(q--){
        char num;
        cout<<"Enter query: ";
        cin>>num;
        num = tolower(num);
        cout<<hashFreq[num-'a'];
        cout<<endl;
    }
    return 0;
}
