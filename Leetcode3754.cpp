class Solution {
public:
    long long sumAndMultiply(int num) {
        long rev = 0;
        long n = num;
        while(n!=0){
            long rem = n%10;
            if(rem!=0){
                rev = rev*10 + rem;
            }
            n/=10;
        }
        n=rev;
        rev = 0;
        long sum = 0;
        while(n!=0){
            long rem = n%10;
            rev = rev*10 + rem;
            sum +=rem;
            n/=10;
        }

        return rev*sum;
    }
};
