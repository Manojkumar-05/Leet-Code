class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, n = s.size(), maxLen = 0;
        unordered_map<char, int>mpp;
        while(r < n){
            if(mpp.count(s[r]))  l = max(mpp[s[r]] + 1, l);
            maxLen = max(maxLen, r - l + 1);
            mpp[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};