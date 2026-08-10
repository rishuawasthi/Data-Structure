class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long strength=INT_MIN;
        int n=nums.size();
        int g=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long mul=(long long)nums[i]*nums[j];
                long long g=pow(gcd(nums[i],nums[j]),2);
                strength=max(strength,(mul/g));
            }
        }
        return strength;
    }
};