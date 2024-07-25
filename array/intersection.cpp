#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1994;
    int arr[4];
    string str[10];
    for(int i=0;i<4; i++){
        int r=round(pow(10,i));
        arr[i]=n%10*r;
        n=n/10;
    }
    for(int i=3; i>=0;i--){
        cout<<(char)round(pow('M',i))<<endl;
        if(arr[i]>=1000){
            if(arr[i]==1000) str[i]='M';
            else if(arr[i]==2000) str[i]='MM';
            else str[i]='MMM';
            cout<<str[i];
        }


    }

}