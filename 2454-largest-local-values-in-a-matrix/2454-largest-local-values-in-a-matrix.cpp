class Solution {
public:
    int maxVal(vector<vector<int>>& arr, int sI, int sJ){
        int max = INT_MIN;
        for(int i = sI; i < sI+3; i++){
            for(int j = sJ; j < sJ+3; j++)
                if(arr[i][j] > max)
                    max = arr[i][j];
        }
        return max;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& arr) {
        int m = arr.size() - 2;
        vector<vector<int>> ans(m, vector<int>(m, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
            ans[i][j] = maxVal(arr, i, j);
            }
        }
        return ans;
    }
};