#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n=a.size();
    int len=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s==k){
                len = max(len,j-i+1);
            }
        }

    }
    return len;
}
