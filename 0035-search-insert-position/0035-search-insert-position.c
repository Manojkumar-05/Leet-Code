int searchInsert(int* arr, int n, int target) {
    int start = 0, end = n - 1;
    int mid;
    while(start <= end){
        mid = start + (end - start) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    if(arr[mid] < target) return mid+1;
    return mid;
}
