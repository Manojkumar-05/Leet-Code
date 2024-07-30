class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        // int l = 0, r = 0, c = 0, n = arr.size(), sum = 0;
        // if(n == 1 && arr[0] != k) return c;
        // while(r < n){
        //     sum += arr[r];
        //     while(sum > k && l <= r) sum -= arr[l++];
        //     if(sum == k) {c++; }
        //     r++; 
        // }
        // return c;
        int c = 0, n = arr.size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += arr[j];
                if(sum == k) c++;
            }
        }
        return c;
    }
};