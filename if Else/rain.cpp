#include<iostream>
using namespace std;

int main(){
    char rain;
    cout<<"is  there rain [y/n]: ";
    cin>>rain;
    if(rain=='y'||rain=='Y'){
        cout<<"Bring Umbrella";
    }
    else{
        cout<<"NO need for umbrella";
    }
    return 0;
}