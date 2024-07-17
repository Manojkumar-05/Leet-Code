int findPiv(int *arr, int n){
    for(int i = 0; i < n - 1; i++) if(arr[i] > arr[i+1]) return i;
    return -1;
}
bool bs(int *arr, int start, int end, int target){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) return true;
        else if(arr[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return false;
}
bool search(int* arr, int n, int target) {
    int piv = findPiv(arr, n);
    if(n == 1 && arr[0] == target || arr[0] == target) return true;
    else if(piv == 0) return bs(arr, piv + 1, n - 1, target); 
    else if(bs(arr, 0, piv, target) == true) return true;
    else if(bs(arr, piv+1, n-1, target) == true) return true;
    return false; 
}