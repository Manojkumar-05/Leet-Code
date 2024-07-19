/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* arr, int n, int* rS) {
    int *ans = (int*)malloc(n*sizeof(int)); 
    int id1 = 0, id2 = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0){ ans[id1] = arr[i]; id1+=2; }
        else { ans[id2] = arr[i]; id2+=2; }
    }
    *rS = n;
    return ans;
}