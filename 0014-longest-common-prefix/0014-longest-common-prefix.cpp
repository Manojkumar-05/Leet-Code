class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int n = strs.size(), m = strs[0].size();
        string ans;

        for (int j = 0; j < m; j++) {
            char c = strs[0][j];
            for (int i = 1; i < n; i++) {
                if (strs[i].size() <= j || strs[i][j] != c) {
                    return ans;
                }
            }
            ans += c;
        }
        return ans;
    }
};