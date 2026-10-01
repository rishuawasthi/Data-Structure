class Solution {
public:

    int reverse_digit(int num){
        int sum=0;
        while(num!=0){
            sum=sum*10+num%10;
            num/=10;
        }
        return sum;
    }

    int countDistinctIntegers(vector<int>& nums) {
        set <int> st;


        for(auto it:nums){
            st.insert(it);
        }


        for(auto it:nums){
            st.insert(reverse_digit(it));
        }

        return st.size();
        
    }
};