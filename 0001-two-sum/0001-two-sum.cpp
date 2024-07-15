class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int n = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                if(n - nums[j] == 0) return {i, j};
            }
        }
        return {0};
    }
};