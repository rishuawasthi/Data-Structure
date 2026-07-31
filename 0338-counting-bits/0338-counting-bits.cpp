class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> vec;
        for(int i=0;i<=n;i++){
            vec.push_back(count_bits(i));
        }
        return vec;
    }
    int count_bits(int n){
        int cnt =0;
        while(n>0){
            if(n%2==1)
            cnt++;

            n/=2;
        }
        return cnt;
    }
};