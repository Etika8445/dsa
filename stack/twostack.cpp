#include<iostream>
using namespace std;

class twostack{
    public:
        int *arr;
        int top1;
        int top2;
        int s;
    twostack(int size){
        s=size;
        top1=-1;
        top2=size;
        arr= new int[size];
    }
    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else cout<<"overflow"<<endl;
    }
    void push2(int num){
        if(top2-top1 > 1){
            top2--;
            arr[top2]=num;
        }
        else cout<<"overflow"<<endl;
    }
    void pop1(){
        if(top1>=0) top1--;
        else cout<<"underflow"<<endl;
    }
    void pop2(){
        if(top2==s) top2++;
        else cout<<"underflow"<<endl;
    }
    void peek(){
        cout<<top1<<" "<<top2;
    }
};
int main(){
    twostack s(5);
    s.push1(23);
    s.push1(45);
    s.push2(67);
    s.push2(90);
    s.push1(57);
    s.peek();
}