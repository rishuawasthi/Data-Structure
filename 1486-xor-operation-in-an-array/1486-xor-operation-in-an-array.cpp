class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int ans=start;
        for(int i=0;i<n;i++){
            nums.push_back(start+2*i);
            if(i!=0)
            ans=ans^nums[i];
        }
        return ans;
    }
};