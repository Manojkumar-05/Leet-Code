/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swap(int *arr,int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int* rearrangeArray(int* arr, int n, int* rS) {
    int *ans = (int*)malloc(n*sizeof(int)); 
    int arr1[n/2], arr2[n/2];
    int id1 = 0, id2 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) arr1[id1++] = arr[i];
        if(arr[i] < 0) arr2[id2++] = arr[i];
    }
    int idx = 0;
    for(int i = 0; i < n/2; i++){
        ans[idx++] = arr1[i];
        ans[idx++] = arr2[i];
        // printf("%d %d\n", arr1[i], arr2[i]);
    }
    *rS = n;
    return ans;
}