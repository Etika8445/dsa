#include<bits/stdc++.h>
using namespace std;

class Queue1{
    public:
    int front;
    int rear;
    int *q;
    int size;
    Queue1(int c){
        front=rear=-1;
        size=c;
        q= new int[c];
    }
    void insert(int r){
        if((front==0 && rear==size) || (rear+1)%size== front) cout<<"full";
        else if(front ==-1){
            front= rear=0;
            q[rear]=r;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            q[rear]=r;
        }
        else{
            rear++;
            q[rear]=r;
        }
    }
    void del(){
        if(front==-1) cout<<"empty";
        q[front]=-1;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else front++;
    }
    void Showfront(){
        if(front==-1) cout<<"empty";
        else cout<<q[front];
    }
};

int main(){
    Queue1 q(5);
    q.insert(9);
    q.insert(6);
    q.Showfront();
    q.del();
    q.Showfront();
    q.del();
    q.Showfront();
    return 0;
}