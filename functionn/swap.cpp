#include<iostream>
using namespace std;

int swap(int &a,int &b){
    return a=(a+b)-(b=a);
}

int main(){
    int p,q;
    cout<<"Enter A: ";
    cin>>p;
    cout<<"Enter B: ";
    cin>>q;

    swap(p,q);

    cout<<"Swaped value: "<<endl;
    cout<<"A:"<<p<<endl;
    cout<<"B:"<<q;
    return 0;
}