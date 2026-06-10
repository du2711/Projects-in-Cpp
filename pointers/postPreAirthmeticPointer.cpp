#include<iostream>
using namespace std;

int main(){ 
    int arr[4]={1,2,3,4};

    int *ptr=&arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<ptr+1<<" "<<*(ptr+1)<<endl;

    *ptr++;
    cout<<*ptr<<endl;

    cout<<(*ptr++)<<endl;

    cout <<endl;
    // *ptr++
    // (*ptr)++
    // *++ptr
    // ++*ptr
    
    int brr[4]={6,7,8,91};
    int* p = &brr[0];

    cout<<*p++<<endl;       // arr[0]->6
    cout<<(*p)++<<endl;     // arr[1]->7
    cout<<*++p<<endl;       // arr[2]->8
    cout<<++*p<<endl;       // arr[2]+1-> 9

    return 0;
}