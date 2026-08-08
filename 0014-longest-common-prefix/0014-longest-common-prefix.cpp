class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string preString=strs[0];

        for(auto str:strs){
            int i=0;
            while(  i<preString.length() && i<str.length() && str[i]==preString[i] ){
                i++;
            }
            preString=preString.substr(0,i);
        }
        return preString;
        
    }
};