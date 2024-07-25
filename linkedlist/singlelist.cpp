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
void insertattail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=tail->next;
}

void insertathead(Node* &head, int data){
    //new node
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
}

void insertatposition(Node* &tail, Node* &head, int position, int data){
    if(position==1){
        insertathead(head,data);
        return;
    }
    Node* temp =head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertattail(tail,data);
        return ;
    }
    Node* mid= new Node(data);
    mid->next =temp->next;
    temp->next= mid;

}

void deletenode(int position, Node* &head, Node* &tail){
    if(position==1){
        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* current=head;
        Node* previous=NULL;
        int cnt=1;
        while(cnt<position){
            previous= current;
            current=current->next;
            cnt++;
        }
        if(current->next==NULL) tail=previous;
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }
}
void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<temp->data;
}
int main(){

    Node* node1= new Node(10);
    
    Node* head= node1;
    Node* tail=node1;
    insertattail(tail, 12);
    //print(head);
    
    insertathead(head, 15);
    //print(head);
    insertatposition(tail,head,3,22);
    //deletenode(4,head,tail);
    print(head);
    //cout<<head->data<<endl;
    //cout<<tail->data<<endl;
}