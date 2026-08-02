class Solution {
public:
    int findComplement(int num) {
        if(num==1)
        return 0;
        unsigned int temp=0;
        int n=num;
        while(n!=0){
            temp=(temp<<1)|1;
            
            n=n>>1;
        }
        return num^temp;
    }
};