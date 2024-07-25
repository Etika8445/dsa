#include<iostream>
using namespace std;

int max(int arr[], int n){
    int min=INT32_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>min) min=arr[i];
    }
    cout<<min<<endl;
}
int min(int arr[], int n){
    int max=INT32_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<max) max=arr[i];
    }
    cout<<max;
}
//sum of array
int sum(int arr[],int n){
    int total=0;
    for(int i=0;i<n; i++){
        total=total+ arr[i];
    }
    cout<<endl<<total;
}
int main(){
    int arr[10]={5,3,8,7,11,-2,9,10,4,0};
    max(arr,10);
    min(arr,10);
    sum(arr,10);
    return 0;

}