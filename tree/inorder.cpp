#include<iostream>
using namespace std;
#include<stack>
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root= new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data for inserting in left"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right"<<endl;
    root->right=buildtree(root->right);
    return root;
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void ino(node* root){
    stack <node*> s;
    while(true){
        if(root!= NULL){
            s.push(root);
            root=root->left;
        }
        else{
            if(s.empty()) break;
            root=s.top();
            cout<< root->data<<" ";
            s.pop();
            root=root->right;
        }
    }
}
void preorder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void preo(node* root){
    stack <node*> s;
    while(true){
        if(root!= NULL){
            s.push(root);
            cout<< root->data<<" ";
            root=root->left;
        }
        else{
            if(s.empty()) break;
            root=s.top();
            s.pop();
            root=root->right;
        }
    }
}
void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void postor(node* root){
    stack <node*> s;
    while(true){
        if(root!= NULL){
            s.push(root);
            root=root->left;
        }
        else{
            if(s.empty()) break;
            node* temp= s.top()->right;
            if(temp==NULL){
                temp=s.top();
                s.pop();
                cout<<temp->data<<" ";
                while(!s.empty() && temp==s.top()->right){
                    temp=s.top();
                    s.pop();
                    cout<<temp->data<<" ";
                }
            }
            else root=temp;
        }
    }
}
int main(){
    node* root=NULL;
    root=buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    postor(root);
}