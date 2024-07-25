#include<iostream>
using namespace std;
int max(int arr[],int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[10]={1,11,7,5,6,7,8,13,9,10};
    bool found=max(arr,10,n);
    if(found) cout<<"present";
    else cout<<"not found";
    return 0;
}