#include<bits/stdc++.h>
using namespace std;

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
void levelodrdertraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void reverselevelorder(node* root){
    stack<node*> s;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        root= q.front();
        q.pop();
        s.push(root);
        if(root==NULL){
            if(!q.empty()){
                 q.push(NULL);
            }
        }
        else{
            if(root->right){
                q.push(root->right);
            }
            if(root->left){
                q.push(root->left);
            }
        }
    }
    s.pop();
    while(s.empty()==false){
        root=s.top();
        if(root==NULL) cout<<endl;
        else cout<<root->data<<" ";
        s.pop();
    }
}
void levelodrdersumtraversal(node* root){
    queue <node*> q;
    vector<long long int> v;
    long long int sum=0;
    v.push_back(root->data);
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        if(temp==NULL){
            v.push_back(sum);
            sum=0;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp->left){
                q.push(temp->left);
                sum+=temp->left->data;
            }
            if(temp->right){
                q.push(temp->right);
                sum+=temp->right->data;
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int heigth(node* root){
    if(root==NULL) return 0;
    int left= heigth(root->left);
    int rigth=heigth(root->right);
    return max(left,rigth)+1;
}
int main(){
    node* root=NULL;
    root=buildtree(root);
    // levelodrdertraversal(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //cout<<heigth(root); 
    //levelodrdersumtraversal(root);
    reverselevelorder(root);
}