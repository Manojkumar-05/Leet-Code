void swap(int** arr, int s, int e, int i) {
    int temp = arr[i][s];
    arr[i][s] = arr[i][e];
    arr[i][e] = temp;
}
void rotate(int** arr, int n, int* m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && i < j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    int s = 0, e = n - 1;
    while(s < e){
        for(int i = 0; i < n; i++) swap(arr, s, e, i);
        s++; e--;
    }
}