class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        int i, j, k;
        for(int i : nums) mp[i]++;
        for(i = 0; i < mp[0]; i++) nums[i] = 0;
        for(j = mp[0]; j < i + mp[1]; j++) nums[j] = 1;
        for(k = i + mp[1]; k < j + mp[2]; k++) nums[k] = 2;
    }
};