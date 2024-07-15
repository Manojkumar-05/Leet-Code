class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        for(int i : nums) mp[i]++;
        for(int i = 0; i < nums.size(); i++){
            if(i < mp[0]) nums[i] = 0;
            else if(i >= mp[0] && i < mp[0] + mp[1]) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};