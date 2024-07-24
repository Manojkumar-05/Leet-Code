int sumOf(int *arr,int start, int idx,int start2, int end){
    int sum1 = 0, sum2 = 0;
    while(start < idx) sum1 += arr[start++];
    while(start2 < end) sum2 += arr[start2++];
    return sum1 == sum2;
}
int pivotIndex(int* nums, int n) {
    int idx = 0; 
    while(idx < n){
        if(sumOf(nums, 0, idx, idx+1, n)) return idx;
        idx++;
    }
    return -1;
}