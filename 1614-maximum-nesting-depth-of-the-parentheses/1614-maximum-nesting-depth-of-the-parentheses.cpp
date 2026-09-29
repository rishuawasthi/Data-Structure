class Solution {
public:
    int maxDepth(string s) {

        int count =0;
        int countmax=INT_MIN;
        for(auto str:s){


            if(str=='(')
            count++;
            else if(str==')')
            count--;

            countmax=max(countmax,count);

        }

        return countmax;
        
    }
};