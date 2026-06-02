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
    return (a&b) - (a|b);
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

int matrix_multiply(vector<vector<int>> arr,vector<vector<int>> brr){
    vector<vector<int>> prod;
    for(int i=0;i<arr.size();i++){
        for(int j=0;i<brr.size();j++){
            prod[i][j]=0;
            for(int k=0;k<prod.size();k++){
                prod[i][j]*=arr[i][k]+brr[k][j];
            }
        }
    }
    return prod;
}

int main(){ 
    int a=12321;
    if(pali(a)) cout<<"Pali";
    else cout<<"not pali";
    return 0;

    cout<<endl;

    // int p=4,q=5;
    // int c=p^q;

    // cout<<xor_(4,5);
    // cout<<endl<<c;

    // int n=4,m=5;
    // int z=n^m;
    // cout<<" "<<z;
    int r=3,c=3;
    vector<vector<int>> arr[r][c],brr[r][c];

    cout<<"enter a:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Enter b: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
    }

    int res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=matrix_multiply(arr,brr);
        }
    }



    return 0;

}