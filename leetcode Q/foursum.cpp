#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums[13]={1,1,1,2,2,2,3,3,3,4,4,5,5};
    int target=8;
    for(int i=0;i<13;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<13;j++){
            if(j!= i+1 && nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l= 12;
            while(k<l){
                long long sum=nums[i]+nums[j];
                sum+=nums[l]+nums[k];
                if(sum==target){
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<" "<<nums[l]<<endl;
                    k++;
                    l--;
                    while(k<l && nums[k]== nums[k-1]) k++;
                    while(k<l && nums[l]== nums[l+1]) l--;
                }
                else if(sum<target){
                    k++;
                }
                else l--;
            }
        }
    }
}