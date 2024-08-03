class Solution {
public:
    string formStr(int n){
        if(n == 0) return "";
        string s = "";
        for(int i = 1; i <= n; i++) s += (char)i + '0';
        return s;
    }
    void swa(string& arr, int i, int j){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    void rev(string& arr, int i, int j){
        while(i < j){
            swa(arr, i , j);
            i++ ; j--;
        }
    }
    void nextPer(string& arr){
        int n = arr.size(), i = n - 2, j = n - 1;
        while(i >= 0 && arr[i] > arr[i+1]) i--;
        if(i >= 0){
            while(arr[j] < arr[i]) j--;
            swa(arr, i, j);
        }
        rev(arr, i+1, n-1);
    }
    string getPermutation(int n, int k) {
        string s = formStr(n);
        k-=1;
        while(k--) nextPer(s);
        return s;
    }
};