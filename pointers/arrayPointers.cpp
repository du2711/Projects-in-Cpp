#include<iostream>
using namespace std;

int main(){ 
    int arr[3]= {15,12,19};
    int *ptr =&arr[0];

    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    return 0;
}