//in-place algorithm
//unstable algoritm
//quick sort preferred more than merge sort -->merge requires extra O(n) space
//space complexity--> O(n)
//Time complexity--> O(nlogn)
//Worst case--> O(n^2) 
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot= arr[s];
    int count=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot) count++;
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
    int i=s, j=e;
    while(i<pivotindex && pivotindex<j){
        while(arr[i]<pivot)  i++;
        while(arr[j]>pivot) j--;
        if(i<pivotindex && pivotindex<j) swap(arr[i++], arr[j--]);
    }
    return pivotindex;
}
void quicksort(int arr[], int s, int e){
    if(s>=e) return ;
    int p= partition(arr, s, e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main(){
    int arr[5]={2,5,1,60,9};
    int n=5;
    quicksort(arr,0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}