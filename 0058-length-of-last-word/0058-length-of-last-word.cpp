class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1, count = 0; 
        for(int i = end; i >= 0 ; i--){
            if(isspace(s[i])) end--;
            else break;
        }
        for(int i = end; i >= 0; i--){
            if(!isspace(s[i])) {
                count++;
                end--;
            }else break;
        }
        return count;
    }
};