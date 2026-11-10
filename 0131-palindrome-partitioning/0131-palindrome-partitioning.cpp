class Solution {
public:
   
    void solve(string s,vector<string>& temp,int i, vector<vector<string>>& ans){
        if(i==s.length()){
            ans.push_back(temp);
            return ;
        }
        for(int ind=i;ind<s.length();++ind){
            if(ispalindrome(s,i,ind)){
                temp.push_back(s.substr(i,ind-i+1));
                solve(s,temp,ind+1,ans);
                temp.pop_back();
            }
        }
    }

    bool ispalindrome(string s,int start ,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
            return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
         vector<vector<string>> ans;
        vector <string> temp;
        solve(s,temp,0,ans);
        return ans;
         }
};
