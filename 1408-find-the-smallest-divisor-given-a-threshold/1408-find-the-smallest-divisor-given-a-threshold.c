int maxi(int *arr, int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++) if(arr[i] > max) max = arr[i];
    return max;
}
bool underThreshold(int *arr, int n, int val, int threshold){
    int count = 0;
    for(int i = 0; i < n; i++) count += ceil((double)arr[i] / (double)val);
    return count <= threshold;
}
int smallestDivisor(int* arr, int n, int threshold) {  
    int end = maxi(arr, n), start = 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(underThreshold(arr, n, mid, threshold)) end = mid-1;
        else start = mid + 1;
    }  
    return start;
}