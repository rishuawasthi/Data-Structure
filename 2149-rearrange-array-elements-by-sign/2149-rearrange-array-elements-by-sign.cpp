class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int positive_index = 0;
        int negative_index = 1;
        for (auto it : nums) {
            if (it >= 0) {
                ans[positive_index] = it;
                positive_index += 2;
            } else {
                ans[negative_index] = it;
                negative_index += 2;
            }
        }
        return ans;
    }
};