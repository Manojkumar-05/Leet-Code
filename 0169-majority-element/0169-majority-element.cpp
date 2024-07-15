class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int max = 0, ans = 0;
        for(int i : nums) mp[i]++;
        for(auto p : mp) if(p.second > max){ans = p.first; max = p.second;}
        return ans;
    }
};