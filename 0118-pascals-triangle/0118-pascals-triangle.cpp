class Solution {
public:
    vector<vector<int>> generate(int r) {
        if(r == 1) return {{1}};
        else if(r == 2) return {{1}, {1, 1}};
        vector<vector<int>> ans;
        ans.resize(r);
        for(int i = 0; i < r; i++){
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i) ans[i].push_back(1);
                else ans[i].push_back(ans[i-1][j] + ans[i-1][j-1]);
            }
        }
        return ans;
    }
};