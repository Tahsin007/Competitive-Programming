
Problem Statement:
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.


class Solution {
public:


int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low =0;
	int high=n-1;
	int ans =n;
	while(low<=high){
		int mid=(high+low)/2;
		if(arr[mid]>=x){
			ans=mid;
			high=mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;
}
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low =0;
	int high=n-1;
	int ans =n;
	while(low<=high){
		int mid=(high+low)/2;
		if(arr[mid]>x){
			ans=mid;
			high=mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums,target,n);
        vector<int> v;

        if(lb==n || nums[lb]!=target){
            return {-1,-1};
        }
        v.push_back(lb);
        v.push_back(ub-1);
        return v;
        
    
    }
};
