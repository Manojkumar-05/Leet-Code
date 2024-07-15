class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0; int tot = 0, i;
        for(i = 0; i < nums.size(); i++){
            sum += nums[i];
            tot += i;
        }
        tot += i;
        return tot - sum;
    }
};