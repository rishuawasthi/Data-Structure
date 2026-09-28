class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {


        string newStr="";
        unordered_map <string,string> mp;
        for(auto vec:knowledge){
            mp[vec[0]]=vec[1];
        }


        for(int i=0;i<s.length();i++){


            if(s[i]!='(')
            newStr+=s[i];


            else{
                int j=i+1;
                string temp="";


                while(j<s.length() && s[j]!=')'){
                    temp+=s[j];
                    j++;
                }


                if(mp.find(temp)!=mp.end())
                newStr+=mp[temp];
                else
                newStr+="?";
                i=j;

            }
        }
        return newStr;
    }
};