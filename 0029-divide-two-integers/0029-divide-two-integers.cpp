class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        bool sign = false;
        if(dividend < 0) sign = !sign;
        if(divisor < 0) sign = !sign;
        unsigned int n = abs(dividend), d = abs(divisor), i = 0, c = 0;
        while(d <= n){
            while((d << (i + 1)) < n) i++;
            n -= (d << i);
            c += 1 << i;
            i = 0;
        }
        if(c == (1 << 31) && !sign) return INT_MAX;
        if(sign) return -c;
        return c;
    }
};