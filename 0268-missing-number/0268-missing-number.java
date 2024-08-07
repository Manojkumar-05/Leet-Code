class Solution {
    public int missingNumber(int[] arr) {
       int i = 0;
       while(i < arr.length){
           int val = arr[i];
           if(val < arr.length && val != arr[val]) swap(arr, i, val);
           else i++;
       } 
       for(int j = 0; j < arr.length; j++){
           if(arr[j] != j) return j;
       }
       return arr.length;
    }
    public void swap(int[] arr, int a, int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}