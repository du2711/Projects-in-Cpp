#include<iostream>
#include<vector>
using namespace std;

void print(int n,string s){
    if(n==0) return;
    cout<<s<<endl;
    print(n-1,s);
}
void one2n(int n){
    if(n==0) return;
    one2n(n-1);
    cout<<n<<" ";
}

void n2one(int n){
    if(n==0) return;
    cout<<n<<" ";
    n2one(n-1);
}
int main(){ 
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int n;
    cout<<"Enter no. of time to be printed: ";
    cin>>n;

    print(n,str);

    one2n(n);
    cout<<endl;
    n2one(n);
    return 0;
}