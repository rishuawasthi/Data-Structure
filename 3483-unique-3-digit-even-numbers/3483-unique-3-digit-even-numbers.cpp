class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int count=0;
        unordered_map <int,int> mp;
        for(auto it:digits){
            mp[it]++;
        }

        for(int i=100;i<999;i=i+2){
            int num=i;
            unordered_map <int,int> mp2;
            while(num!=0){
                mp2[num%10]++;
                num/=10;
            }
            bool flag=false;
            for(auto it: mp2){
                if(mp[it.first]<mp2[it.first])
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            count++;
        }
        return count;

    }
};