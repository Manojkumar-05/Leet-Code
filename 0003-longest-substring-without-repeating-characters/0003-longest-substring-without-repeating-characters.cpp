class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l, r, n = size(s), maxLen = 0;
        char str[n+1];
        for(l = 0; l < n; l++){
            int seen[256] = {0}, idx = 0;
            for(r = l; r < n; r++){
                str[idx++] = s[r];
                if(seen[s[r]] == 1) break;
                maxLen = max(maxLen, r - l + 1);
                seen[s[r]] = 1;
            }
        }
        return maxLen;
    }
};