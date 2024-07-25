#include<bits/stdc++.h>
using namespace std;
// creating using adjacency list
class graph{
    public:
        unordered_map<int,list<int>> adj;
        unordered_map<int,bool> m;
        unordered_map<int,int>parent;
        queue<int> q;
        void addedges(int u, int v,bool direction){
            // if direction 0 --> undirected
            // if direction 1 --> directed
            // creating edges from u to v
            adj[u].push_back(v);
            if(direction==0){
                adj[v].push_back(u);
            } 
        }
        void printadjList(){
            for(auto i: adj){
                cout<<i.first<<"-->  ";
                for(auto j : i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }
        void bfstraversal(){
            q.push(0);
            m[0]=1;
            while(!q.empty()){
                int s=q.front();
                q.pop();
                cout<<s<<" ";
                for(auto j: adj[s]){
                    if(m[j]!=true){
                        q.push(j);
                        m[j]=1;
                    }
                }
            }
        }
        void dfstraversal(int node){
            cout<<node<<" ";
            m[node]=1;
            for(auto i: adj[node]){
                if(m[i]!=true){
                    dfstraversal(i);
                }
            }
        }
        bool checkcyclebfs(){
            parent[0]=-1;
            m[0]=1;
            q.push(0);
            while(!q.empty()){
                int s= q.front();
                q.pop();
                for(auto i: adj[s]){
                    if(m[i]==1 && i!=parent[s]) return true;
                    else if(!m[i]){
                        q.push(i);
                        m[i]=1;
                        parent[i]=s;
                    }
                }
            }
            return false;
        }
        bool checkcycledfs(int node, int parent1){
            m[node]=1;
            for(auto i: adj[node]){
                if(m[i]==1 && i!=parent1) return true;
                else if (!m[i]){
                    bool dete = checkcycledfs(i,node);
                    if(dete) return true;
                }
            }
            return false;
        }
};
// enter the number of nodes5
// enter the number of edges6
// 0 1
// 1 2
// 2 3
// 3 4
// 1 3
// 0 4
// 4-->  3, 0,
// 0-->  1, 4,
// 1-->  0, 2, 3,
// 2-->  1, 3,
// 3-->  2, 4, 1,

int main(){
        int n;
        cout<<"enter the number of nodes";
        cin>>n;
        int m;
        cout<<"enter the number of edges";
        cin>>m;
        graph g;
        for(int i=0; i<m ; i++){
            int u,v;
            cin>>u>>v;
            g.addedges(u,v,0);
        }
        // cout<< g.checkcyclebfs();
        // g.bfstraversal();
        // g.printadjList()
        // g.dfstraversal(0);
        cout<<g.checkcycledfs(0,-1);
        return 0;
}