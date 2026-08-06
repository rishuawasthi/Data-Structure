class Solution {
public:
    int smallestNumber(int n, int t) {
        while(digitProduct(n)%t!=0){
            n++;
        }
        return n;
    }
    int digitProduct(int n)
    {
        int num=1;
        while(n!=0){
            num*=n%10;
            n/=10;
        }
        return num;
    }
};