int maximumWealth(int** arr, int m, int* n) {
    int  max = 0, sum;
    // printf("%d %d", m , *n);
    for(int i = 0; i < m; i++){
        sum = 0;
        for (int j = 0; j < *n; j++){
            sum += arr[i][j];
        }
        if(sum > max) max = sum;
    }
    return max;
}