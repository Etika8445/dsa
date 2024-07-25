#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid){
    int student=1;
    int sum=0;
    for(int i=0; i<n; i++){
        if(sum + arr[i]<=mid) sum= sum+arr[i];
        else{
            student++;
            if(student>m || arr[i]>mid) return false;
            sum=arr[i];
        }
    }
    return true;
}
int book(int arr[], int n, int m){
    int sum=0;
    for(int i=0;i<n; i++){
        sum=sum+arr[i];
    }
    int ans=-1;
    int s=0;
    int e= sum;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr, n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int search(vector<int>& nums) {
        //nums.erase(unique(nums.begin(), nums.end()),nums.end());
        int s=0;
        int e=nums.size()-1;
        int mid= s+(e-s)/2;
        while(s<e){
            //if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[0]) s= mid+1;
            else e= mid;
            mid=s+(e-s)/2;
            cout<<mid<<endl;
        }
        if(nums[0]<nums[nums.size()-1]) return nums[0];
        return s;
}
int main(){
    int arr[4]={5,17,100,11};
    //cout<<book(arr,4,4);
    vector<int> nums={4,5,6,7,0,0,1,4};
    //nums.erase(unique(nums.begin(), nums.end()),nums.end());
    cout<<search(nums);
    /*int arr[6]={5,1,2,3,4,2};
    int ans=0;
    for(int i=0; i<6;i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<6;i++){
        ans=ans^i;
    }
    cout<<ans; //2*/
}