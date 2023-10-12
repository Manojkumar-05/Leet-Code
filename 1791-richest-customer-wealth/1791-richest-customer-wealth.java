class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = Integer.MIN_VALUE;
        int val = 0;
        for(int[] row : accounts){
            for(int cols : row){
                val += cols;
            }
            if(val > max) max = val;
            val = 0;
        }
        return max;
    }
}