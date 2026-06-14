#include<iostream>
#include<vector>
using namespace std;

void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
void swapGreat(vector<int> &arr,vector<int> &brr,int idx1,int idx2){
    if(arr[idx1]>brr[idx2]) swap(arr[idx1],brr[idx2]);
}

void mergeArray(vector<int> &arr,vector<int> &brr){
    int n=arr.size();
    int m=brr.size();

    // vector<int> resArr(n+m);

    // int left=0,right=0;
    // int idx=0;

    // while(left<n && right<m){
    //     if(arr[left]<=brr[right]){
    //         resArr[idx] = arr[left];
    //         left++,right++;
    //     }
    //     else{
    //         resArr[idx]=brr[right];
    //         right++,idx++;
    //     }
    // }

    // while(left<n){
    //     resArr[idx++]=arr[left++];
    // }

    // while(right<m){
    //     resArr[idx++]=brr[right++];
    // }

    // for(int i=0;i<n+m;i++){
    //     if(i<n) arr[i]=resArr[i];
    //     else brr[i-n]=resArr[i];
    // }

    // int left=n-1;
    // int right=m-1;
    // while(left>=0 && right<m){
    //     if(arr[left]>brr[right]){
    //         swap(arr[left],brr[right]);
    //         left--,right++;
    //     }
    //     else break;
    // }


    int len= (n+m);
    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            //arr and brr
            if(left<n&&right>=n){
                swapGreat(arr,brr,left,right-n);
            }
            // brr and brr 
            else if(left>=n){
                swapGreat(brr,brr,left-n,right-n);
            }
            // arr and arr
            else{
                swapGreat(arr,arr,left,right);
            }
            left++,right++;
        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
}

int main(){ 
    int n;
    cout<<"Enter Size of array A: ";
    cin>>n;

    vector<int> arr;
    cout<<"Enter array A: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int m;
    cout<<"Enter Size of array B: ";
    cin>>m;

    vector<int> brr;
    cout<<"Enter array B: ";
    for(int i=0;i<m;i++){
        int ele;
        cin>>ele;
        brr.push_back(ele);
    }

    cout<<mergeArray(arr,brr);
    return 0;
}