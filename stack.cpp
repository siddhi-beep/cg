#include<iostream>
using namespace std;
const int size=10;
class stack{
    public:
    int top=-1;
    int array[size];

    void push(int x){
        if(top==size-1){
            cout<<"satck is full";
        }
        else{
            array[++top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack overflow";
        }
        top--;
    }
    void display(){
        if(top==-1){
            cout<<"stack is empty";
        }
        for(int i=0;i<=top;i++){
        cout<<array[i]<<" ";
            
        }
    }

};
int main(){
    stack s;
    s.push(1);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    s.display();
}