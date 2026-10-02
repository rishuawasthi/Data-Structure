class Solution {
public:
    int minSteps(string s, string t) {

        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;

        for (auto it : s) {
            mps[it]++;
        }

        for (auto it : t) {
            mpt[it]++;
        }

        int ans=0;
        for(auto it:mps){
            if(mpt.find(it.first)==mpt.end())
            ans+=it.second;
            else{
                if(it.second-mpt[it.first]>0)
                ans+=it.second-mpt[it.first];
            }

        }

        return ans;
    }
};