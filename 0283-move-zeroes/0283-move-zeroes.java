class Solution {
    public void moveZeroes(int[] arr) {
       int[] ans = new int[arr.length];
       int start = 0, end = 1;

       for(int i = 0; i < arr.length; i++){
        //    if(arr.length < 2) break;

           if(arr[i] == 0){ 
            ans[ans.length - end] = 0;
            end++;
            }
            else{
                ans[start] = arr[i];
                start++;
            }
       }
       for(int i = 0; i < arr.length; i++){
           arr[i] = ans[i];
       }
}
}