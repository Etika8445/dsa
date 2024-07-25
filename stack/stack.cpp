#include<bits/stdc++.h>
using namespace std;

class Stack1{
    public:
    int *arr;
    int top;
    int size;
    Stack1(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }
    void push(int ele){
        if(size-top>1){
            top++;
            arr[top]=ele;
        }
        else cout<<"overflow";
    } 
    void pop(){
        if(top>=0){
            top--;
        }
        else cout<<"underflow";
    }
    int peek(){
        if(top>-1) return arr[top];
        else cout<<"empty";
    }
    void isempty(){
        if(top==-1) cout<<"empty";
    }
};

int main(){
    Stack1 st(5);
    st.push(9);
    st.push(10);
    cout<<st.peek();
    return 0;
}