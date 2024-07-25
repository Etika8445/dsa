//leetcode
//if occurence is unique , print true otherwise false
//eg { 2, 3, 2, 3, 1, 2} 1=1, 2=3, 3=2 => true
//{1,2} 1=1 2=2 => false

#include<bits/stdc++.h>
using namespace std;


bool unique(int arr[], int n){
    map<int,int> m;
    for(int i=0; i<n; i++)
        m[arr[i]]++;
    set<int> s;
    for(auto v: m){
        s.insert(v.second);
    }
    if(s.size()==m.size()) return true;
    return false;
}
int main(){
    int arr[10]={2, 8, 3, 2, 3, 1, 2, 8, 8};     
    cout<<unique(arr, 10);
    return 0;
}