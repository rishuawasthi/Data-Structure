class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(auto it:nums){
            mp[it]++;
        } 
        int count=INT_MIN;
        int ans=nums[0];
        for(auto it:mp){
            if(count<it.second){
                count=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};