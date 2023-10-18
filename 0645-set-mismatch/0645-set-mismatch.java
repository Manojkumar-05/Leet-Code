class Solution {
    public int[] findErrorNums(int[] arr) {
       int i = 0;
       while(i < arr.length){
           int val = arr[i];
           if(val != arr[val - 1]) Swap(arr, i , val - 1);
           else i++;
       } 
       for(int j = 0; j < arr.length; j++){
           if(arr[j] != j + 1) return new int[] {arr[j], j + 1};
       }
       return new int[] {-1, -1};
    }
    public void Swap(int[] arr, int one, int two){
        int temp = arr[one];
        arr[one] = arr[two];
        arr[two] = temp;
    }
}