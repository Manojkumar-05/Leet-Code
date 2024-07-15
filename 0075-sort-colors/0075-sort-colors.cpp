class Solution {
public:
    void swap(vector<int> &arr,int i, int j){
        int temp = arr[i]; 
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void sortColors(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++)
            for(int j = i + 1; j < nums.size(); j++)
                if(nums[i] > nums[j]) swap(nums, i, j);
    }
};