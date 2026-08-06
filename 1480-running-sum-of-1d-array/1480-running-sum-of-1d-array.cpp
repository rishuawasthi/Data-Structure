class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> sum;
        int preSum =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            sum.push_back(preSum);
        }
        return sum;
    }
};