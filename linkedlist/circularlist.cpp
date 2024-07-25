#include<iostream>
using namespace std;

class Node{
    public:
        int data; //data
        Node* next; //pointer
        Node(int data){
            this->data=data;
            this->next= NULL;
        }
        ~Node(){
            int value=this->data;
            if(this->next !=NULL){
                delete next;
                this->next =NULL;
            }
            cout<<"free value of "<<value<<endl;
        }
};
void insertNode(Node* &tail,int element, int data){
    if(tail==NULL){
        Node* node1= new Node(data);
        tail=node1;
        node1->next=node1;
    }
    else{
        Node* current= tail;
        while(current->data != element){
            current= current->next;
        }
        Node* node1= new Node(data);
        node1->next=current->next;
        current->next=node1;
    }
}
void deletenode(Node* &tail, int element){
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    else{
        Node* previous= tail;
        Node* current= previous->next;
        while(current->data != element){
            previous=current;
            current= current->next;
        }
        if(current==previous) tail=NULL;
        if(tail==current) tail=previous;
        previous->next= current->next;
        current->next=NULL;
        delete current;
    }
}
void print(Node* tail){
    Node* temp= tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail= NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,6);
    insertNode(tail,6,9);
    insertNode(tail,3,8);
    insertNode(tail,6,14);
    print(tail);
    deletenode(tail,3);
    deletenode(tail,9);
    print(tail);
}
