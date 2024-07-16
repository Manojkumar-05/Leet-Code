/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int n, char x, int* rN) {
    int *arr = (int *)malloc(n * sizeof(int));
    int idx = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < strlen(words[i]); j++)
            if(words[i][j] == x){
                arr[idx++] = i;
                break;
            } 
        
    *rN = idx;
    return arr;
}