#include<iostream>
#include<vector>
using namespace std;

bool palCheck (int num,int *temp){
    if(num==0) return true;
    bool result = palCheck(num/10,temp) && (num%10) == ((*temp)%10);
    (*temp)/=10;
    return result;
}

int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int secNum = n;
    int *temp = &secNum;

    cout<<palCheck(n,temp);
    return 0;
}