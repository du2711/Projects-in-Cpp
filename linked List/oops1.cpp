#include<iostream>
#include<vector>
using namespace std;

class fruit{
    public:
    string name;
    string color;
};

int main(){ 
    
    fruit apple;
    apple.name="Apple";
    apple.color="Red";

    fruit *mango= new fruit();
    mango->color="Mango";
    mango->name="yellow";

    cout<<apple.name<<" "<<mango->name;
    return 0;
}