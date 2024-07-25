#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int a=n-1;
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[a]);
        //int temp =arr[i];
        //arr[i]=arr[a];
        //arr[a]=temp;
        a--;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    reverse(arr,10);
    for(int i=0; i<10; i++){
        cout<<arr[i];
    }
    return 0;
}