class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())
            return {};
        int start = nums[0];
        int n = nums.size();
        vector<string> ans;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (nums[i - 1] == start) {
                    ans.push_back(to_string(start));
                    start = nums[i];

                } else {
                    string s = to_string(start) + "->" + to_string(nums[i - 1]);
                    ans.push_back(s);
                    start = nums[i];
                }
            }
        }
        if (nums[n - 1] == start)
            ans.push_back(to_string(start));
        else
            ans.push_back(to_string(start) + "->" + to_string(nums[n - 1]));
        return ans;
    }
};