#include <bits/stdc++.h>
using namespace std;

// using prefix sum

int main(){
    int arr[10]={1,2,3,-1,1,1,1,1,1,3};
    int sum=3;
    map<int,int> mpp;
    mpp[0]=1;
    int prefixsum=0, count=0;
    for(int i=0; i<10; i++){
        prefixsum+=arr[i];
        int rem=prefixsum-sum;
        count+=mpp[rem];
        mpp[prefixsum]++;
    }
    cout<<count<<endl;
}