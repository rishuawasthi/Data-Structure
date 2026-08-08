class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string preString=strs[0];

        for(auto str:strs){
            int i=0;
            while(str[i]==preString[i] && i<preString.length() && i<str.length()){
                i++;
            }
            preString=preString.substr(0,i);
        }
        return preString;
        
    }
};