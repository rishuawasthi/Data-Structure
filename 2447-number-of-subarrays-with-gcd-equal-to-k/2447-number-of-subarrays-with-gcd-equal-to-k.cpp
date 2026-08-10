class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int greatest=nums[i];
            if(nums[i]==k)
            count++;
            for(int j=i+1;j<n;j++){
                greatest=gcd(greatest,nums[j]);
                if(greatest==k)
                count++;
            }
        }
        return count;
    }
};