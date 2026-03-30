#include<iostream>
using namespace std;

int main(){
    //sizeof
    int a=5;
    cout<<sizeof(a)<<endl;

    char name ='a';
    bool flag;

    // ternary
    //condition ? if : else
    a==name ?flag = true:false;
    cout<< flag <<endl;
    cout<<(&a)<<endl;

    
    return 0;
}