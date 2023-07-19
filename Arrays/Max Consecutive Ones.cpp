class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxVal=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxVal = max(maxVal, count);
            }else{
                count=0;
            }
        }
        return maxVal;
        
    }
};
