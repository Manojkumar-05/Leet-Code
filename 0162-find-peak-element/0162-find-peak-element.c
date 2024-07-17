int findPeakElement(int* arr, int n) {
    if(n == 1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;
    
    int start = 0, end = n - 2;
    while(start < end){
        int mid = start + (end-start)/ 2;
        if(arr[mid] > arr[mid+1]) end = mid;
        else start = mid + 1;
    }
    return start;
}