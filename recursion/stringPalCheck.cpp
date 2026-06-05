#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool pal(string &str,int i){
    if(i>= str.length()/2) return true;
    if(tolower(str[i]) != tolower(str[str.length()-i-1])) return false;
    else return pal(str,i+1);
}

int main(){ 
    string atr;
    cout<<"Enter: ";
    getline(cin,atr);

    cout<<"Is palindrome: ";
    if(pal(atr,0)) cout<<"true";
    else cout<<"false";
    return 0;
}