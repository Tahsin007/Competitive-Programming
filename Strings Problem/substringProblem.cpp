//https://leetcode.com/problems/sum-of-beauty-of-all-substrings/

class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int> mp;
            for(int j=i;j<s.length();j++){
                mp[s[j]]++;
                int maxFreq=0;
                int minFreq =INT_MAX;
                for(auto it:mp){
                    maxFreq = max(maxFreq,it.second);
                    minFreq = min(minFreq,it.second);
                }
                sum+=(maxFreq-minFreq);
            }
        }

        return sum;
    }
};

//aabcb
