#include<iostream>
#include<vector>
using namespace std;

typedef struct node{
        int data;
        node* next;
    }node;

    void insert(int a){
        node* temp = new node();

        temp->data = a;
        temp->next = NULL;
    }

int main(){ 
    int e,f,c;
    cout<<"Enter element you want to enter: ";
    cin>>e>>f>>c;
    insert(e);
    insert(f);
    insert(c);

    cout<<&e<<" "<<&f<<" "<<&c;

    return 0;
}