class Solution {
public:
    vector<int> nextPer(vector<int>& arr, int n){
        int i = n - 2, j = n - 1;
        while(i >= 0 && arr[i] >= arr[i+1]) i--;
        if(i >= 0){
            while(arr[j] <= arr[i]) j--;
            swap(arr[i], arr[j]);
        }
        reverse(arr.begin() + i + 1, arr.end());
        return arr;
    }
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        ans.push_back(arr);
        vector<int> next = nextPer(arr, n);

            while(find(ans.begin(), ans.end(), next) == ans.end()){
                ans.push_back(next);
                next = nextPer(arr, n);
        
        }
        return ans;
    }
};