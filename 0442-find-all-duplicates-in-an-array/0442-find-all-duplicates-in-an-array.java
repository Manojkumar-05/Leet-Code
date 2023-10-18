class Solution {
    public List<Integer> findDuplicates(int[] arr) {
     int i = 0;
     List<Integer> ans = new ArrayList<>();
     while(i < arr.length){
         if(arr[i] != arr[arr[i] - 1]) Swap(arr, i, arr[i] - 1);
         else i++;
              
         }
    for(int j = 0; j < arr.length; j++){
        if(arr[j] != j + 1) ans.add(arr[j]);        
    }
        return ans;
    }
    public void Swap(int[] arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    }
}