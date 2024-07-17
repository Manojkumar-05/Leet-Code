class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        map<int, int> m;
        for(int i : nums) m[i]++; 
        for(int i = 1; i <= n; i++) if(m[i] == 0) ans.push_back(i);
        return ans;
    }
};