class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        map<int, int> m;
        for(int i : arr){
            if(m[i] == 1) return i;
            m[i]++;
        }
        return 0;
    }
};