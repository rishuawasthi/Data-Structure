class Solution {
public:
    int hIndex(vector<int>& citations) {
       
        int n=citations.size();
        vector <int> nums(n+1,0);

        for(int c:citations){
            if(c>n)
            nums[n]++;
            else
            nums[c]++;
        }

        int count =0;
        for(int i=n;i>=0;i--){
            count+=nums[i];
        if(count>=i)
        return i;

        }

        return 0;


    }
};