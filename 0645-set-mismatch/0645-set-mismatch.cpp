class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> answer;
        sort(nums.begin(), nums.end());
        long long sum_n = 0;
        long long sum_nums = 0;
        int i;

        for (int i = 0; i < nums.size(); i++) {
            sum_n += i + 1;
            sum_nums += nums[i];
        }


        for (i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                break;
        }



        answer.push_back(nums[i]);
        int diff = sum_n - sum_nums;
        answer.push_back(nums[i] + diff);

        return answer;
    }
};