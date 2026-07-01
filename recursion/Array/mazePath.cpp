#include<iostream>
#include<vector>
using namespace std;

int maze(int cr,int cc,int er,int ec){
    int rightWays=0;
    int downWays=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightWays+= maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downWays =maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays+= maze(cr,cc+1,er,ec);
        downWays =maze(cr+1,cc,er,ec);
    }

    int totalWays = rightWays+downWays;

    return totalWays;
}

int main(){ 
    int n,m;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>>m;

    int ways = maze(0,0,n-1,m-1);

    cout<<"Total Ways: "<<ways;
    return 0;
}