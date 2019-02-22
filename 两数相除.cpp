class Solution {
public:
    int divide(int dividend, int divisor) {
        long long m,n;
        int flag;
        long long dividends = abs(dividend);
        long long divisors = abs(divisor);
        if(dividend == pow(2,31)*-1)
            dividends = pow(2,31);
        if(divisor == pow(2,31)*-1)
            divisors = pow(2,31);
        if(dividends==dividend&&divisors==divisor || dividends!=dividend&&divisors!=divisor)
            flag = 1;
        else
            flag = -1;
        if(dividends<divisors)
            return 0;
        long long res=0;
        while(dividends>=divisors)
        {
            n=1;
            m = divisors;
            while(dividends>=m)
            {
                m<<=1;
                n<<=1;
            }
            n>>=1;
            res+=n;
            dividends=dividends-(m>>1);
            
        }
        if(res>pow(2,31)-1 && flag==1)
            return pow(2,31)-1;
        return res*(flag);
    }
};