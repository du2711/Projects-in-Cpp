#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ra, ca, rb, cb;
    cout << "Enter no. of rows of Matrix-A: ";
    cin >> ra;
    cout << "Enter no. of columns of Matrix-A: ";
    cin >> ca;

    cout << "Enter no. of rows of Matrix-B: ";
    cin >> rb;
    cout << "Enter no. of columns of Matrix-B: ";
    cin >> cb;

    if (ca != rb) {
        cout << "Matrix multiplication not possible! Columns of A must equal rows of B." << endl;
        return 0;
    }

    vector<vector<int>> A(ra, vector<int>(ca));
    vector<vector<int>> B(rb, vector<int>(cb));
    vector<vector<int>> C(ra, vector<int>(cb, 0));

    cout << "Enter Matrix-A:" << endl;
    for (int i = 0; i < ra; i++)
        for (int j = 0; j < ca; j++)
            cin >> A[i][j];

    cout << "Enter Matrix-B:" << endl;
    for (int i = 0; i < rb; i++)
        for (int j = 0; j < cb; j++)
            cin >> B[i][j];

    // Matrix multiplication
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            for (int k = 0; k < ca; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Product is:" << endl;
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}




// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){ 
//     int ra,ca;
//     cout<<"Enter no. of rows of matrix-A: ";
//     cin>>ra;
//     cout<<"Enter no. of columns of matrix-A: ";
//     cin>>ca;
//     int rb,cb;
//     cout<<"Enter no. of rows of matrix-B: ";
//     cin>>ra;
//     cout<<"Enter no. of columns of matrix-B: ";
//     cin>>ca;

//     int a[ra][ca],b[rb][cb];

//     cout<<"Enter Matrix-A: "<<endl;
//     for(int i=0;i<ra;i++){
//         for(int j=0;j<ca;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"Enter Matrix-B: "<<endl;
//     for(int i=0;i<rb;i++){
//         for(int j=0;j<cb;j++){
//             cin>>b[i][j];
//         }
//     }

//     int arr[ra][cb];
//     for(int i=0;i<ra;i++){
//         for(int j=0;j<cb;j++){
//             int prod=0;
//             for(int k=0;k<ra;k++){
//                 prod+=a[i][k]*b[k][j];
//             }
//             arr[i][j]=prod;
//         }
//     }

//     cout<<"Product is: ";
//     for(int i=0;i<ra;i++){
//         for(int j=0;j<cb;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }