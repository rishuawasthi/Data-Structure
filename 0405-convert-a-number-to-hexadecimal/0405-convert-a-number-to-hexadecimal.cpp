class Solution {
public:
    string toHex(int num) {
        if(num==0)
        return "0";
        string answer="";
        unsigned int n= static_cast<unsigned int>(num);
        string str="0123456789abcdef";
        while(n!=0){
            int d=n%16;
            answer=(str[d])+answer;

            n=n/16;
        }
        return answer;
    }
};