#include<iostream>
#include<vector>
using namespace std;

class rec{
    int x;

    public:

    void set(int n){
        x=n;
    }

    int get (){
        return x;
    }
};

int main(){ 
    
    rec obj1;

    obj1.set(3);
    cout<<obj1.get()<<endl;
    return 0;
}