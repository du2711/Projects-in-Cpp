#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    int p=10;
    int *x = &p;

    cout<<x;
    cout<<endl<<&x;

    float f=3.14;
    float*ff=&f;

    cout<<endl;   
    cout<<ff;      
    cout<<endl;
    cout<<&ff;
    cout<<endl;
    cout<<*ff;      //3.14
    cout<<endl;
    cout<<&f;       
    cout<<endl;
    cout<<f;        //3.14

    return 0;
}