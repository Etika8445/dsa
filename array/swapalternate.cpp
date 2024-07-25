#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s, int k) {
        string f="";
        int m=s.length();
        char h[26]={1};
        int n=0;
        for(int i=0;i<m;i++){
            f.push_back(s[i]);
            if(s[i]==s[i+1]){
                n=s[i]-'a';
                h[n]++;
                cout<<h[n]<<" ";
                if(h[n]==k){
                    for(int j=0;j<k; j++){ 
                        f.pop_back();
                        h[n]--;  
                    }
                }
            }  
        }
        return f;
    }
int main(){
    string s="deeedbbcccbdaa";
    cout<<removeDuplicates(s, 3);
}
// 186 leetcode
// searching sorted rotated array
/*
int binarysearchh(int nums[], int n, int target){
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
}
int main(){
    int arr[9]={7,8,9,10,11,1,2,3,4};
    //cout<<findnumber(arr,9,12);
    cout<<binarysearchh(arr,9,11);
}*/
/*int swapp(int arr[], int n){
    if(n%2!=0){
        n=n-1;
    }
    for(int i=0; i<n; i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[10]={2,5,7,8,1,2,8,5,6,9};
    swapp(arr,10);
    for(int i=0; i<10; i++){
        cout<<arr[i];
    }

    return 0;
}*/