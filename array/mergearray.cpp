#include<bits/stdc++.h>
using namespace std;

void mergearr(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        nums1.resize(m+n);
        int count=nums1[i];
        while(i<m+n && j<n && m!=0 && n!=0){
            if(count<=nums2[j]){
                if(count==0){
                    nums1[i]=nums2[j++];
                }
                if(count!=0) nums1[i]=count;
                i++;
                count=nums1[i];
            // cout<<count<<" "<<i<<endl;
            }
            else{
                // cout<<count<<"ith in else  "<<i<<endl;
                nums1[i++]=nums2[j++];
                swap(nums1[i],count);
                // i++;
                // cout<<nums1[i]<<" "<<count<<endl;

            }
        }
        if(n==0) nums1=nums2;
    }


int main(){
    vector<int>nums1={1,2,3};
    int m=3;
    vector<int>nums2={2,5,6};
    int n=3;
    mergearr(nums1,m,nums2,n);
    // cout<<nums1;
    for (auto n:nums1){
        cout<<n<<endl;
    }
    return 0;
}