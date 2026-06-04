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

int xor_(int a,int b){
    return (a|b) - (a&b);
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

vector<vector<int>> matrix_multiply(vector<vector<int>> arr,vector<vector<int>> brr){
    vector<vector<int>> prod(arr.size(),vector<int>(brr[0].size(),0));
    for(int i=0;i<arr.size();i++){
        for(int j=0;i<brr.size();j++){
            prod[i][j]=0;
            for(int k=0;k<arr[0].size();k++){
                prod[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    return prod;
}

void fibonacci(int n){
    int a=0;
    int b=1;

    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int temp=a;
        a=b;
        b=temp+a;
    }
}

int main(){ 
    // int a=12321;
    // if(pali(a)) cout<<"Pali";
    // else cout<<"not pali";

    // cout<<endl;

    // int p=4,q=5;
    // int c=p^q;

    // cout<<xor_(4,5);
    // cout<<endl<<c;

    // int n=4,m=5;
    // int z=n^m;
    // cout<<" "<<z;
    // int r=3,u=3;

    // vector<vector<int>> arr(r,vector<int>(c));
    // vector<vector<int>> brr(r,vector<int>(c));

    fibonacci(10);
    return 0;

}