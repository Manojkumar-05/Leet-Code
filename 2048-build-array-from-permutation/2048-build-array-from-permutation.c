/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int n, int* returnSize) {
    int *ans = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        ans[i] = nums[nums[i]];
    }
    *returnSize = n;
    return ans;
}