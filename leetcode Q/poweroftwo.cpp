//find the number which is n==2*n

#include<iostream>
using namespace std;
int main(){
    int n;
    int m=0;
    cin>>n;
    if(n==0){
        cout<<"false";
        m=1;
    }
    while(n>1){
        if(n%2!=0){
            m=1;
            cout<<"false";
            break;
        }
        else n=n/2;
    }
    if(m==0) cout<<"true";
}