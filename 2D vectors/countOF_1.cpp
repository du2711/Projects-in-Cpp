#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int oneInRow(vector<vector<int>> &v){
    int maxOne = 0;
    int maxoneRow = -1;
    int column = v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int oneCount = column-j;
                if(oneCount > maxOne){
                    maxOne = oneCount;
                    maxoneRow = i;
                }
                break;
            }
        }
    }

    return maxoneRow;
}

int main(){ 
    int r,c;
    cin>>r>>c;

    vector<vector<int>> vec(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>vec[i][j];
        }
    }

    int result = oneInRow(vec);
    cout<<result<<endl;
    return 0;
}
