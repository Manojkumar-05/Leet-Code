

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int size, int n, int* returnSize){
    int *arr = (int*)malloc(size * sizeof(int));
    int j= 0;
    for(int i = 0; i < n; i++){
        arr[j++] = nums[i];
        arr[j++] = nums[i+n];
    }
    *returnSize = size;
    return arr;
}