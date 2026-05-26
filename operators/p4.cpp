#include<iostream>
#include<vector>
using namespace std;

bool p2(int a){
    return (a&(a-1))==0 && (a-1)%7==0;
}

void swap(int &i,int &j){
    int temp=i;i=j;j=temp;
}

void reverse(int arr[],int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

bool pali(int a){
    int origin=a;
    int rev=0,remain=0;

    while(a>0){
        remain=a%10;
        rev=(rev*10)+remain;
        a/=10;
    }
    if(rev==origin) return true;
    else return false;
}

int main(){ 
    int a=12321;
    if(pali(a)) cout<<"Pali";
    else cout<<"not pali";
    return 0;
}