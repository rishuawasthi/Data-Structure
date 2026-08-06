class Solution {
public:
    int maxScore(string s) {
        int countOne=0;
        int countZero=0;
        int n=s.length();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
            countOne+=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0')
            countZero++;
            if(s[i]=='1')
            countOne--;
            ans=max(ans,countOne+countZero);
        }
        return ans;
    }
};