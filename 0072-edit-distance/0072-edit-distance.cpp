class Solution {
public:
    int min(int a, int b, int c){
        if(a < b && a < c) return a;
        else if(b < a && b < c) return b;
        return c;
    }
    int minDistance(string word1, string word2) {
        int l1 = word1.size(), l2 = word2.size();
        int arr[l1+1][l2+1];
        for(int i = 0; i <= l1; i++){
            for(int j = 0; j <= l2; j++){
                if(i == 0) arr[i][j] = j;
                else if(j == 0) arr[i][j] = i;
                else if(word1[i - 1] == word2[j - 1]) arr[i][j] = arr[i - 1][j - 1];
                else arr[i][j] = 1 + min(arr[i][j-1], arr[i-1][j], arr[i-1][j-1]);
            }
        } 
        return arr[l1][l2];
    }
};