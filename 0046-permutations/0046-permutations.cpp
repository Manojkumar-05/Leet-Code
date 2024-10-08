class Solution {
public:
    vector<int> nextPer(vector<int>& arr, int n){
        int i = n - 2, j = n - 1;
        while(i >= 0 && arr[i] >= arr[i + 1]) i--;
        if(i >= 0) {
            while(arr[j] < arr[i]) j--;
            swap(arr[i], arr[j]);
        }
        reverse(arr.begin() + i + 1, arr.end());
        return arr;
    }
    vector<vector<int>> permute(vector<int>& arr){
        int n = arr.size();
        vector<int> original = arr, next = nextPer(arr, n);
        vector<vector<int>> ans;
        ans.push_back(original);

        while(next != original){
            ans.push_back(next);
            next = nextPer(arr,n);
        }
        return ans;
    }
};