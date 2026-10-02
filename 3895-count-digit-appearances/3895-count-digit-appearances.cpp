class Solution {
public:
    int count_k(int num,int k){
        int count=0;
        while(num>0){
            if(num%10==k)
            count++;
            num/=10;
        }
        return count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(auto it:nums){
            ans+=count_k(it,digit);
        }
        return ans;
    }
};