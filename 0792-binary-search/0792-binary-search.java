class Solution {
    public int search(int[] nums, int target) {
        return BinarySearch(nums, target);
    }
    public int BinarySearch(int[] arr, int target){
        int start = 0, end = arr.length - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        return -1;
    }
}