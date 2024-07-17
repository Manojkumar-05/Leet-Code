int maxSubArray(int* arr, int n) {
    int max = arr[0], sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i]; 
        if(sum < 0) sum = 0;
        if(sum > max) max = sum;
    }
    return max;
}