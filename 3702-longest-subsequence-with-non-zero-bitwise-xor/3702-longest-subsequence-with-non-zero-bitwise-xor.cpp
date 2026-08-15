class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        bool hasNonZero=false;
        int count;
        for(int i=0;i<n;i++){
            x^=nums[i];
            if(nums[i]!=0)
            hasNonZero=true;
        }
        if(x!=0)
        return n;
        else if(!hasNonZero)
        return 0;
        else
        return n-1;

    }
};