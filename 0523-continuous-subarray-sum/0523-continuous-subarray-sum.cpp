class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        long long preSum=0;
        int n=nums.size();
        unordered_map<int,int> remainder;
        remainder[0]=-1;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int r=preSum%k;
            if(remainder.find(r)==remainder.end())
            remainder[r]=i;
            else if(i-remainder[r]>=2)
            return true;
        }
        return false;
    }
};