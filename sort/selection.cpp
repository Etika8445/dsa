#include<iostream>
using namespace std;
//unstable sort(equal element will change their order)
//in place sort(does not require extra space)
//non adaptive sort
//space complexity-->O(1)
//best case-->sorted O(n^2)
//worst case-->reverse O(n^2)
int main(){
    int arr[9]={29,72,98,13,87,66,52,51,36};
    int n=9;
    int temp;
    for(int i=0; i<n-1; i++){
        temp=i;
        for(int j=i+1; j<n; j++)
            if(arr[temp]>arr[j])  temp=j;
        swap(arr[i],arr[temp]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}