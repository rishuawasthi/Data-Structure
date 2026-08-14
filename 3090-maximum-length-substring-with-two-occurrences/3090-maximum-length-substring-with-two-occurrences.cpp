class Solution {
public:
    int maximumLengthSubstring(string s) {
        if(s.length()==0)
        return 0;
        unordered_map<char,int> mp;
        int n=s.length();
        int lower=0;
        int upper=0;
        int maxLength=INT_MIN;
        while(upper<n){
            mp[s[upper]]++;
            while(mp[s[upper]]>2){
                mp[s[lower]]--;
                lower++;
            }
            maxLength=max(maxLength,upper-lower+1);
            upper++;
        }
        return maxLength;

    }
};