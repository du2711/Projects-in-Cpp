#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int x=20;
    int* ptr= &x;

    double dec = 9.8;
    cout<<"size: "<<sizeof(x)<<endl;
    cout<<"size: "<<sizeof(dec)<<endl;

    cout<<ptr<<" "<<(ptr+1)<<endl;
    
    return 0;
}