class Solution {
    public boolean search(int[] arr, int target) {
        int pivot = findPiv(arr);
        boolean ans = BinarySearch(arr, target, 0, pivot);
        if(ans == false){
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
             
            if(arr[mid] == arr[start] && arr[mid] == arr[end]){
                if(start < mid && arr[start] > arr[start + 1]){
                    return start;
                }
                start++;
                if(mid < end && arr[end] < arr[end - 1]){
                    return end;
                }
                end--;
            }
            else if((arr[start] < arr[mid]) || (arr[start] == arr[mid] && arr[mid] > arr[end])){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            
        }
        return -1;

    }
    boolean BinarySearch(int[] arr, int target, int start, int end){
            while (end >= start){
                int mid = start + (end - start)/2;

                if(target < arr[mid]) end = mid - 1;

                else if(target > arr[mid]) start = mid + 1;

                else return true;

            }
            return false;
    }
}