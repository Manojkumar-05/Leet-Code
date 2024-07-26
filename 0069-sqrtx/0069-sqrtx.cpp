class Solution {
public:
    int mySqrt(int x) {
        long s = 1, e = x;
        while(s <= e){
            long m = s + (e - s) / 2;
            if(m*m == x) return m;
            else if(m*m > x) e = m - 1;
            else s = m + 1;
        }
        return e;
    }
};