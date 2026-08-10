class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int greatest = nums[i];

            for (int j = i; j < n; j++) {
                greatest = gcd(greatest, nums[j]);
                if (greatest == k)
                    count++;
                else if(greatest%k !=0)
                break;
            }
        }
        return count;
    }
};