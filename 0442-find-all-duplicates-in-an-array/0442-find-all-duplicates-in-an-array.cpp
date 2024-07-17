class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int>m;
        vector<int> ans;
        for(int i:nums) if(m[i]++ == 1) ans.push_back(i);
        return ans;    
    }
};