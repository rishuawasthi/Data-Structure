class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int lower=0;
        int upper=n-1;
        while(lower!=upper){
            int mid=lower+(upper-lower)/2;
            if(nums[mid]<nums[mid+1])
            lower=mid+1;
            else
            upper=mid;
        }
        return lower;
    }
};