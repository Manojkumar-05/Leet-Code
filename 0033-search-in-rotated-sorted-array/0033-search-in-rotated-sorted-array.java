class Solution {
    public int search(int[] arr, int target) {
        int peak = findPeak(arr);
        int ans = binarySearch(arr, target, 0, peak);
        if(ans == -1) return binarySearch(arr, target, peak + 1, arr.length - 1);
        return ans;
    }
    public int findPeak(int[] arr){
    int start = 0, end = arr.length - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if( mid < end && arr[mid] > arr[mid + 1]) return mid;
        else if ( mid > start && arr[mid] < arr[mid - 1]) return mid - 1;
        else if (arr[start] >= arr[mid]) end = mid - 1;
        else if (arr[start] <= arr[mid]) start = mid + 1;
    }
    return -1;
}
    public int binarySearch(int[] arr, int target, int start, int end){
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] > target) end = mid - 1;
            else if(arr[mid] < target) start = mid + 1;
            else return mid;
         }
         return -1;
    }
}