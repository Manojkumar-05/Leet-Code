/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *ans = (int *)malloc(numsSize * 2 * sizeof(int));
    for(int i = 0; i < numsSize; i++){
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    for(int i = 0; i < numsSize * 2; i++)
        // printf("%d ", ans[i]);
        *returnSize = numsSize * 2;
    return ans;
}