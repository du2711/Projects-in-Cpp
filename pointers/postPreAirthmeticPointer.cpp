#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    
    int arr[4]={1,2,3,4};

    int *ptr=&arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<ptr+1<<" "<<*(ptr+1)<<endl;

    *ptr++;
    cout<<*ptr<<endl;

    cout<<(*ptr++)<<endl;
    return 0;
}