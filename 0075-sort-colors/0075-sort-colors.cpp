class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int slow = 0;
        for(int i = slow; i < n; i++) if(arr[i] == 0) swap(arr[slow++], arr[i]);
        for(int i = slow; i < n; i++) if(arr[i] == 1) swap(arr[slow++], arr[i]);
    }
};