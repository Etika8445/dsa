#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[13]={-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    int i=0;
    int j;
    int k;
    int len=0;
    for(int i=0; i<13; i++){
        if(i>0 && arr[i]== arr[i-1]) continue;
        j=i+1;
        k=12;
        while(k>j){
            len=arr[i]+arr[j]+arr[k];
            if(len<0) j++;
            else if(len>0) k--;
            else {
                cout<< arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                j++;
                k--;
                while( j<k && arr[j]== arr[j-1]) j++;
                while(j<k && arr[k]== arr[k+1]) k--;
            }
        }
    }
}