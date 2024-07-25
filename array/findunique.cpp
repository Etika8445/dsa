//leetcode
//you have given an integer arraylist[arr] of size n is equal to (2m+1).
//"m" numbers are present twice and one number only once.
//eg m=3 , n=7, arraylist{4,5,7,8,4,7,8} 
//find unique number
#include<iostream>
using namespace std;

void unique(int arr[], int n){
    int ans=0;
    for(int i=0; i<n;i++){
        ans= ans^arr[i]; // 1^1=0 //7^5=2
    }
    cout<<ans;
}
int main(){
    int arr[7]={4,5,7,8,4,7,8};
    unique(arr,7);
    return 0;
}