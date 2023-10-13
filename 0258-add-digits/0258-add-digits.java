class Solution {
    public int addDigits(int num) {
        if(num == 0) return 0;
        int ans = sumDigits(num);
        while(ans > 9){
            ans = sumDigits(ans);
        }
        return ans;
    }
    public int sumDigits(int num){
        int tot = 0;
          while(num > 0){
            tot += num % 10;
            num = num / 10;
        }
        return tot;
    }
}