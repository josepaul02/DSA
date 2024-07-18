/*
Question:
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
Negative powers included

Approach:
uses exponentiating by squaring 
like how x^n=x^(n/2)*x^(n/2) for n=even
and x^n=x*^(n-1/2)*x^(n-1/2) for n=odd

*/
class Solution {
public:
    double myPow(double x, int n) {
        long long k=n;
        double a=1;
        if(n==0)
            return 1;
        else if(n<0)
        {
            x=1/x;
            k=-k;
        }
        while(k>0)
        {
            if(k%2==1)
            {
                a*=x;
                k--;
            }    
            else
            {
                x*=x;
                k/=2;
            }
        }
        return a;
    }
};