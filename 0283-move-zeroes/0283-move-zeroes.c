void moveZeroes(int* nums, int numsSize) {
    int fast = 0, slow = 0;
    for(; fast < numsSize; fast++)
        if(nums[fast] != 0) nums[slow++] = nums[fast];   
    for(; slow < numsSize; slow++){
        nums[slow] = 0;
    }
}