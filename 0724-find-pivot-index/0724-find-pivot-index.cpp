class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int ls=0,flag=0;
      int rs=accumulate(nums.begin()+1,nums.end(),0);
      for(int i=0;i<nums.size();i++)
      {
        if(rs==ls)
        {
            flag=1;
            return i;
        }
            ls+=nums[i];
            if (i + 1 < nums.size())
                rs -= nums[i + 1];

      }
      return -1;

    }
};