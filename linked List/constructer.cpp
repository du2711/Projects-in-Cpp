#include<iostream>
#include<vector>
using namespace std;
class rec{
public:
    int l;
    int b;

    rec(){                 //default
        l=0;
        b=0;
    }

    rec(int x , int y){      // parametrised
        l=x;
        b=y;
    }

    rec(rec &r){         //copy
        l=r.l;
        b=r.b;
    }

    ~rec(){
        cout<<"Destructer";
    }
};
int main(){ 
    rec *r1=new rec(6,7);
    cout<<r1->l<<" "<<r1->b;
    cout<<endl;
    delete r1;

    rec r2(8,9);
    cout<<r2.l<<" "<<r2.b;
    cout<<endl;

    rec r3 =r2;
    cout<<r3.l<<" "<<r3.b;
    cout<<endl;


    return 0;
}