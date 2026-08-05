class Solution {
public:
    string reverseVowels(string s) {
        int lower=0;
        int upper=s.length()-1;
        string str="aeiouAEIOU";
        while(lower<=upper){
            if(str.contains(s[lower])&& str.contains(s[upper])){
                swap(s[lower],s[upper]);
                lower++;
                upper--;
            }
            else if(str.contains(s[lower]))
            upper--;
            else if(str.contains(s[upper]))
            lower++;
            else
            {
                lower++;
                upper--;
            }
        }
        return s;

    }
};