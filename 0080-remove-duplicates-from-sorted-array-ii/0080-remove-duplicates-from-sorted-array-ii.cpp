class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int k=0;
        for(auto it:mp){
            if(it.second==1)
            nums[k++]=it.first;
            else{
                nums[k++]=it.first;
                nums[k++]=it.first;
            }
        }
        return k;
    }
};