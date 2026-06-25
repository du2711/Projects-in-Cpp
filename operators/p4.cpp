#include<iostream>
#include<vector>
using namespace std;

bool strPal(string &str,int i){
    if(i>=str.length()/2) return true;
    if(tolower(str[i]) != tolower(str[str.length()-1])) return true;
    else return strPal(str,i+1);
}

int unique(int arr[],int n){
    int unique=0;
    for(int i=0;i<n;i++){
        unique=unique^arr[i];
    }
    return unique;
}

void swap(int &i,int &j){
    int temp=i;
    i=j;
    j=temp;
}

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void duplicate(int arr[],int n){
    sort(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<"Found at index "<<i<<" and "<<i+1<<" as "<< arr[i];
            cout<<endl;
        }
    }
}

bool p2(int a){
    return (a&(a-1))==0 && (a-1)%7==0;
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

bool pali(int a,int &temp){
    if(a==0) return true;
    bool result = pali(a/10,temp) && (a%10)==(temp)%10;
    temp/=10;
    return result;
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

    // int n;
    // cout<<"Enter number of elements: ";
    // cin>>n;

    // int arr[n];
    // cout<<"Enter array: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // int u=unique(arr,n);

    // cout<<"unique element is: "<<u;

    // string str = "Madam";
    // cout<<strPal(str,0);

    int n=1232;

    int temp =n;

    cout<<pali(n,temp);

    return 0;

}