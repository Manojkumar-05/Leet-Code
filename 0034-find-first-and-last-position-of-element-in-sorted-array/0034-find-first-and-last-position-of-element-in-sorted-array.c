/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int bs(int *arr, int target, int start, int end, int n){
    if(n == 0) return -1;
    if(n > 0 && arr[0] == target) return 0;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}
int* searchRange(int* arr, int n, int target, int* rS) {
    *rS = 2;
    int sId = bs(arr, target, 0, n-1, n);
    int eId = sId;
    int *ans = (int*)malloc(2 * sizeof(int));
    if(sId == -1 ||( sId == 0 && n == 1)){
        ans[0] = sId;
        ans[1] = eId;
        return ans;
    } 
    else{
        while(sId >= 0 && arr[sId] == target) sId--;
        ans[0] = sId+1;
        printf("%d ", ans[0]);
        while(eId < n && arr[eId] == target) eId++;
        ans[1] = eId-1;
        printf("%d ", ans[1]);
    }
    return ans;
}