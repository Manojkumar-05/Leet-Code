class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size(), i = 0, idx = 0,j = n - 1;
        while(i < n){
            if(arr[i] == 0) {i++ ; continue;}
            arr[idx++] = arr[i++];
        }
        while(idx <= j) arr[j--] = 0;
    }
};