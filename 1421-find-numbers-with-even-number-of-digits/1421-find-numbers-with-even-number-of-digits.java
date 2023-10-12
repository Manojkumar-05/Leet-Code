class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int num : nums){
        if(evenDigits(num)) count++;
        }
        return count;
    }
    public boolean evenDigits(int num) {
        int digiCount = 0;
        while(num > 0){
            digiCount++;
            num = num / 10;
        }
        return digiCount % 2 == 0;
    }
}