class Solution {
    public int search(int[] arr, int target) {
        int pivot = findPiv(arr);
        int ans = BinarySearch(arr, target, 0, pivot);
        if(ans == -1){
            return BinarySearch(arr, target, pivot+1, arr.length - 1);
        }
        return ans;
    }
    int findPiv(int[] arr){
        int start = 0;
        int end = arr.length - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(mid < end && arr[mid] > arr[mid + 1]) return mid ;
            if(start < mid && arr[mid] < arr[mid - 1]) return mid-1;
            if(arr[mid] <= arr[start]) end = mid - 1;
            else start = mid + 1 ;
        }
        return -1;

    }
    int BinarySearch(int[] arr, int target, int start, int end){
            while (end >= start){
                int mid = start + (end - start)/2;

                if(target < arr[mid]) end = mid - 1;

                else if(target > arr[mid]) start = mid + 1;

                else return mid;

            }
            return -1;
        }
}   