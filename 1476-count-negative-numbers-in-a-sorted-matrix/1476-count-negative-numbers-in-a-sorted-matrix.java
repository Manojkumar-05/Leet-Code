class Solution {
    public int countNegatives(int[][] grid) {
        int count = 0;
        for(int[] arr : grid){
            for(int n : arr){
                if (n < 0) count++;
            }
        }
        return count;
    }
}