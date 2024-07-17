class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        map<int, int>m;
        for(auto i : arr) if(i > 0) m[i]++;
        int i = 1;
        while(i) if(m[i++] < 1) return --i;
        return 0;
    }
};