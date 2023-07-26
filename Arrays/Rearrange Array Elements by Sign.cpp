class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,0);
        int negIndex=1, posIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                v[negIndex]=nums[i];
                negIndex+=2;
            }else{
                v[posIndex]=nums[i];
                posIndex+=2;
            }
        }
        return v;
    }
};
