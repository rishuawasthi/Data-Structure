class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector <int> vec1;
        for(int i=n-k;i<n;i++){
            vec1.push_back(nums[i]);
        }
        vector <int> vec2;
        for(int i=0;i<n-k;i++){
            vec2.push_back(nums[i]);
        }
        int temp=0;
        for(int it:vec1){
            nums[temp++]=it;
        }
        for(int it:vec2){
            nums[temp++]=it;
        }
    }
};