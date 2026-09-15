class Solution {
public:

    int squareSum(int n){
        int sum=0,d;
        while(n){
            d=n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
    }



    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=squareSum(slow);
            fast=squareSum(fast);
            fast=squareSum(fast);
        }while(slow!=fast)


        if(slow==1)
        return true;
        

        return false;
    }
};