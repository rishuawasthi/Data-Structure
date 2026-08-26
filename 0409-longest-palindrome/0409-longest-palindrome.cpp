class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        unordered_map <char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        int count=0;
        for(auto it:mp){
            count+=it.second/2;
        }
        if(count*2<n)
        return count*2+1;
        else
        return count*2;
    }
};