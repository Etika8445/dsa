#include<bits/stdc++.h>
using namespace std;


struct item{
    int value;         //descending order priority queue
    int priority;
};
item pr[100];
int size=-1;
void insertion(int value, int priority){
    size++;
    pr[size].value=value;
    pr[size].priority=priority;
}
int Showfront(){
    int highestP= INT_MIN;
    int ind=-1;
    for(int i=0; i<=size; i++){
        if(highestP==pr[i].priority && ind>-1 && pr[ind].value<pr[i].value){ //between value
            highestP=pr[i].priority;
            ind=i;
        }
        else if(highestP<pr[i].priority){
            highestP=pr[i].priority;
            ind=i;
        }
    }
    return ind; 
}
void dele(){
        int ind =Showfront();
        for(int i=ind; i<size; i++){
            pr[i]=pr[i+1];
        }
        size--;
}    
int main(){
        insertion(16,2);
        insertion(10,3);
        insertion(90,3);
        int d=Showfront();
        cout<<pr[d].value;
        dele();
        d=Showfront();
        cout<<pr[d].value;
}