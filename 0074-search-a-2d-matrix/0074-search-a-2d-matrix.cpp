class Solution {
public:

    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size();
        int n = arr[0].size();
        int start = 0, end = n - 1;
        for(auto a:arr){
            if(a[n-1] < target) continue;
            while(start <= end){
                int mid = start + (end - start) / 2;
                if(a[mid] == target) return true;
                else if(a[mid] > target) end = mid - 1;
                else start = mid + 1;
            }
        }
        return false;   
    }
};