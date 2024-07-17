int findPivot(int *arr, int n){
    if(n == 1) return -1;
    for(int i = 0; i < n - 1; i++) if(arr[i] > arr[i+1]) return i;
    return -1;
}
int bs(int *arr, int start, int end, int target){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}
int search(int* arr, int n, int target) {
    int piv = findPivot(arr, n);
    printf("%d", piv);
    if(piv == -1) return bs(arr, 0, n-1, target);
    if(piv == 0 && target == arr[piv]) return piv;
    if(piv == 0 && n > 1) return bs(arr, 1, n-1, target);
    else{
        int ans = bs(arr, 0, piv, target);
        if(ans != -1) return ans;
        else return bs(arr, piv + 1, n - 1, target);
    }
    return 0;
}