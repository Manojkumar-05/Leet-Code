class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit = 0, n = arr.size(), min = 0, max = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < arr[min]) min = i;
            if(max < min) max = min;
            if(arr[i] > arr[max]) max = i;
            if((arr[max] - arr[min]) > profit)
                 profit = arr[max] - arr[min];   
        }
        return profit;
    }
};