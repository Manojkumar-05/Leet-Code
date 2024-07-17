class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n = a.size();
        if(n == 1 || a[0] != a[1]) return a[0];
        if(a[n-1] != a[n-2]) return a[n-1];
        int s = 1, e = n-2;
        while(s <= e){
                int m = s + (e-s)/2;
                if(a[m] != a[m-1] && a[m] != a[m+1]) return a[m];
                else if((m%2 == 1 && a[m] == a[m-1]) ||
                       (m%2 == 0 && a[m] == a[m+1])   
                ) s = m + 1;
                else e = m - 1;
            }
        return -222;
    }
};