class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
            if(nums[i] == target) return i;
        for(int i = 0; i < n; i++)
            if(i == n - 1 &&nums[i] < target || 
            nums[i] < target && nums[i+1] > target) return i+1;
        
         return 0; 
    }
};