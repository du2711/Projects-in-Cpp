#include<iostream>
#include<vector>
using namespace std;

string occurance(string &str,int idx,char target){

    //time -> O(n^2) in worst case 
    //space -> O(n)
    if(idx == str.size()) return str;
    if(str[idx]==target){
        str.erase(idx,1);
        return occurance(str,idx,target); 
    }
    else return occurance(str,idx+1,target);

    // time O(n^2)
    // space -> O(n^2)
    if(idx == str.size()) return "";
    string curr = "";
    curr= curr+str[idx];
    return ((str[idx] == target) ? "" : curr) + occurance(str,idx+1,target);
}

int main(){ 
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    char tar;
    cout<<"Enter target deletion: ";
    cin>>tar;

    cout<<"Edited String: "<<occurance(str,0,tar);
    return 0;
}