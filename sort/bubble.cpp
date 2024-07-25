#include<iostream>
using namespace std;
//stable sort
//in place sort
//Adaptive sort
//space complexity-->O(1)
//best case-->sorted O(n)
//worst case-->reverse O(n^2)
int main(){
    int arr[9]={29,72,98,13,87,66,52,51,36};
    int n=9;
    bool swapped= false;
    for (int i = 1; i <n; i++){  //1 to n-1 round
        for (int j = 0; j<n-i; j++){
            if (arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]); 
                swapped= true;
            } 
        } 
        if(swapped== false) break;     
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
//using recursion
/*void bubble(int *arr, int n){
    if(n==0 || n==1) return ;
    for(int i=1; i<n;i++){
        if(arr[i-1]>arr[i]) swap(arr[i-1],arr[i]);
    }
    bubble(arr, n-1);
}

int main(){
    int arr[6]={2,40,5,6,1,13};
    bubble(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
}*/