// reversing the 32 bit integer
// according to the range of integer
#include<iostream>
using namespace std;
int sum(int n){
    int rev=0;
    while(n){
        int ans=n%10;
        if((rev>INT32_MAX/10) ||(rev<INT32_MIN/10)){
            return 0;
        }
        rev=rev*10+ans;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}