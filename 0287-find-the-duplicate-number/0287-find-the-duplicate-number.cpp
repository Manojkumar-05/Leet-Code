class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        map<int, int> m;
        for(int i : arr) m[i]++;
        for(auto p : m) if(p.second > 1) return p.first;
        return 0;
    }
};