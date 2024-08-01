class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for(int n : arr) m[n]++;
        for(auto p1 : m){
            for(auto p2: m){
                if(p1.first != p2.first && p1.second == p2.second) return false;
            }
        }
        return true;
    }
};