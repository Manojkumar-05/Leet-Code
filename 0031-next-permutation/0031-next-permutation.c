void swap(int *arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void reverse(int *arr, int s, int e){
    while(s < e){
        swap(arr, s, e);
        s++; e--;
    }
}
void nextPermutation(int* arr, int n) {
    int i = n - 2, j = n - 1;
    while(i >= 0 && arr[i] >= arr[i+1]) i--;
    if(i >= 0) {
        while(arr[j] <= arr[i]) j--;
        swap(arr, j, i);
    }
    reverse(arr, i+1, n-1);
}