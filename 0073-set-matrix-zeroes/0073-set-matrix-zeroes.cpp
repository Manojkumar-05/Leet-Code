class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<pair<int , int>> zero; 
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(arr[i][j] == 0) zero.push_back({i, j});
            for(auto s : zero){
                auto i = s.first, j = s.second;
                for(int k = 0; k < m; k++) arr[k][j] = 0;
                for(int l = 0; l < n; l++) arr[i][l] = 0;
            }
        
    }
};