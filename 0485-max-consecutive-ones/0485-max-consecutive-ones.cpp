class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countmax=0;
        int count=0;
        for(int it:nums){
            if(it==0)
            count=0;
            else{
                count++;
                countmax=max(countmax,count);
            }
        }
        return countmax;
    }
};