class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
        int m = s.size();
        int map[26] = {0};
        for(int i = 0; i < m; i++) map[s[i] - 97] = i;
        for(int i = 0; i < m; i++) sum += abs(map[t[i] - 97] - i);
        return sum;
    }
};