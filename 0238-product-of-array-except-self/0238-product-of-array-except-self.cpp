class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int nonzero=1;
        int mul=1;
        int count=0;


        for(int it:nums){
            if(it!=0)
            nonzero*=it;

            if(it==0)
            count++;

            mul*=it;
        }


        vector <int> ans(n,0);
        if (count>=2)
        return ans;

        int k=0;
        for(auto it:nums){
            if(mul==0 && it==0)
                ans[k++]=nonzero;
            else if(mul!=0)
            ans[k++]=mul/it;
            else 
            k++;
        }

        return ans;
    }
};