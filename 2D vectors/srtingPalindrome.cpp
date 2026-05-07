#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

bool pal(string str){
    int start=0, end=str.length()-1; 
    bool isPal = true;

    while(start<end){
        if(tolower(str[start]) != tolower(str[end])) isPal=false;
        start++;
        end--;
    }
}

int main(){ 
    string str;
    cout<<"Enter your string: ";
    getline(cin,str);
    cout<<"Entered string is: "<<str;
    
    bool isPal = pal(str);

    if(isPal) cout<<endl<<"A palindrome";
    else cout<<endl<<"Not a Palindrome";

    return 0;
}