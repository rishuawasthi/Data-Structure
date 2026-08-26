class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m=g.size();
        int n=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int r=0,l=0;
        int count =0;
        while(l<n && r<m){
            if(g[r]<=s[l]){
                count ++;
                r++;
            }
            l++;
        }
        return count;
    }
};