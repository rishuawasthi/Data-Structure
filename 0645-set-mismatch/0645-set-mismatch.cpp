class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum;
        vector<int> answer;
        sort(nums.begin(), nums.end());
        int sum_n = 0;
        int sum_nums = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum_n += i + 1;
            sum_nums += nums[i];
        }
        int i;
        for (i = 1; i < nums.size(); i++) {
            sum = nums[i - 1] ^ nums[i];
            if (sum == 0)
                break;
        }
        answer.push_back(nums[i]);
        int diff = sum_n - sum_nums;
        answer.push_back(nums[i] + diff);

        return answer;
    }
};