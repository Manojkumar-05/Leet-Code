class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        map<int, int> m;
        for(int i : arr){
            if(m[i] == 1) return i;
            m[i]++;
        }
        for(auto p : m) if(p.second > 1) return p.first;
        return 0;
    }
};