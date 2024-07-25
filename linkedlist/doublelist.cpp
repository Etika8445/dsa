#include<iostream>
using namespace std;

class Node{
    
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data= data;
            this->prev= NULL;
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
void insertathead(Node* &tail,Node* &head, int data){
    if(head==NULL){                     //Node*head =NULL;
        Node* temp=new Node(data);      //Node*tail=NULL;
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
}
void insertattail(Node* &tail,Node* &head, int data){
    if(head==NULL){                     //Node*head =NULL;
        Node* temp=new Node(data);      //Node*tail=NULL;
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }   
}
void insertatposition(Node* &head, Node* &tail, int position, int data){
    if(position==1){
        insertathead(tail,head,data);
        return ;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }
    if(temp->next==NULL) {
        insertattail(tail,head,data);
        return ;
    }
    Node* newnode=new Node(data);
    newnode->next = temp->next;
    temp->next->prev=newnode;
    temp->next =newnode;
    newnode->prev=temp;
}
void deleteatposition(Node* &head, Node* &tail, int position){
    if(position==1){
        Node* temp= head;
        temp->next->prev=NULL;
        head= temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int cnt=1;
        Node* current= head;
        Node* previous= NULL;
        while(cnt<position){
            previous= current;
            current= current->next;
            cnt++;
        }
        if(current->next==NULL){
            tail=previous;
        }
        previous->next=current->next;
        current->prev=NULL;
        current->next->prev=previous;
        current->next=NULL;
        delete current;
    }
}
void reverse(Node* &head){
    Node* current= head;
    Node* previous= NULL;
    while(current!=NULL){
        previous=current->prev;
        current->prev=current->next;
        current->next=previous;
        current=current->prev;
    }
    head=previous->prev;
}
void print(Node* &head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
        length++;
    }
    cout<<endl;
    //cout<<length<<endl;
}
int main(){
    Node* node1 =new Node(12);
    Node* head= node1;
    Node* tail= node1;
    insertathead(tail,head, 23);
    insertattail(tail,head,78);
    insertatposition(head, tail, 3, 99);
    print(head);
    //deleteathead(head);
    //deleteattail(tail);
    //deleteatposition(head,tail,2);
    //print(head);
    reverse(head);
    print(head);
    //cout<<head->data<<endl;
    //cout<<tail->data<<endl;
}