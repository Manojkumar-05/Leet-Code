/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool isSelf(int n){
    int copy = n;
    while(n){
        int div = n % 10;
        if(div == 0) return false;
        if(copy % div != 0) return false;
        n /= 10;
    }
    return true;
}

int* selfDividingNumbers(int s, int e, int* r) {
    int *arr = (int *)malloc(e * sizeof(int));
    int idx = 0;
    for(int i = s; i <= e; i++)
        if(isSelf(i)) arr[idx++] = i;
    *r = idx;
    return arr;
}