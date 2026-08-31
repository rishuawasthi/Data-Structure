class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector <int> ans;
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            if(a.second==b.second)
            return a.first>b.first;
            else
            return a.second<b.second;
        });
        for(auto it:vec){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};