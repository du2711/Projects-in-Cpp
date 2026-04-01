#include<iostream>
using namespace std;

void replace(int a){
    a=9;
}

void re(int &a){
    a=9;
}

int main(){
    int z=100;
    replace(z);
    cout<<z<<endl;   // ----------->>> this would have output as 100

    re(z);
    cout<<z;         // ----------->>> this would have output as 9
    return 0;
}     