int numIdenticalPairs(int* nums, int n) {
    int c = 0;
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(nums[j] == nums[i]) c++;
        
    
    return c;
}