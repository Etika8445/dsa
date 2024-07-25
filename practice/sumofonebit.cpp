//find total no of set bit 
//2(010),3(011)=>3


#include<iostream>
using namespace std;

int ap(int a, int b){
    int count=0;
    while(a!=0 || b!=0 ){
    if(a==1 || b==1){
        count+=1;
    }
    if(a%2==1 || b%2==1){
        count+=1;
    }
    a=a/2;
    b=b/2;
    }
    return count;
}

int main(){
    int a=10;
    int b=0;
  cout<<ap(a,b);
}