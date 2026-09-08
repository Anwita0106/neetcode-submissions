class Solution {
public:
    double helper(double x, long n) {
        if (n == 0) return 1.0;
        if (n < 0) return 1.0 / helper(x, -n);
        if (n % 2 == 0) {
            double half = helper(x, n / 2);
            return half * half;
        } else {
            return x * helper(x, n - 1);
        }
    }
    
    double myPow(double x, int n) {
        return helper(x, (long)n); 
    }
};