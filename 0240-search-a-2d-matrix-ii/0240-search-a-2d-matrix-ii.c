

bool searchMatrix(int** arr, int m, int* n, int target){
    int r = 0, c = *n - 1;
    while(r < m && c >= 0){
        if(arr[r][c] == target) return true;
        else if(arr[r][c] < target) r++;
        else c--;
    }
    return false;
}