#include<iostream>
using namespace std;
//shifting
//stable sort
//in place sort
//Adaptive sort(order of elements affects the TC in sorting algo)
//space complexity-->O(1)
//best case-->sorted O(n)
//worst case-->reverse O(n^2)
int main(){
    int arr[9]={29,72,98,13,87,66,52,51,36};
    int n=9;
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}