// complement of base 10 integer

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;      //5(000000101)
    int m=n;     
    int mask=0;
    if(n==0){ 
        cout<<1;
    }
    else{
        while(m!=0){
            mask= (mask<<1)|1;     //(000000)|1=>(0000001),(0000000010)|1=>(0000000011),(0000110)|1=>(0000111)
            m=m>>1;                //(000000010),(000000001),(00000000)
        }
        int ans= (~n) & mask;      //(1111111010)&(00000111)=>(00000010)
        cout<<ans;                 //2
    }                
}