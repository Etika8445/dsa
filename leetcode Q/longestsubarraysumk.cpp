#include<iostream>
using namespace std;
//subarray----> contiguous
int main(){
    int arr[10]={1,2,3,-1,1,1,1,1,1,3};
    int i=0, j=0;
    int sum=6;
    int len=0;
    int count=0;
    for(int k=0; k<10; k++){
        len=len+arr[j];
        if(len>sum){
            len-=arr[i];
            i++;
        }
        if(sum==len) {
            count=max(count,(j-i+1));
            cout<<count<<endl;
        }
        j++;
    }
    cout<<count<<endl;
}