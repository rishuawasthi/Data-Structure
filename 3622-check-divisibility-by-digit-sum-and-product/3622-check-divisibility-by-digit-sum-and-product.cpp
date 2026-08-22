class Solution {
public:


    int product(int n){
        int product=1;
        while(n!=0)
        {
            product*=n%10;
            n/=10;
        }
        return product;
    }


    int sumation(int n){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }


    bool checkDivisibility(int n) {
        return (n%(sumation(n)+product(n))==0);
    }
};