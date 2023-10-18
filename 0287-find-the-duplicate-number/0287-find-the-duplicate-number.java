class Solution {
    public int findDuplicate(int[] arr) {
    int i = 0;
            while ( i < arr.length) {
                int val = arr[i];
                if(val != arr[val - 1]) Swap(arr, i, val - 1);
                else {
                    if(arr[i] != i + 1) return arr[i];
                    i++;
                }
            }
            // for(int idx = 0; idx < arr.length; idx++){
            // }
            return -1;
        }

    public void Swap(int[] arr, int a, int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}