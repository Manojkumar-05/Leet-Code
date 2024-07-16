int finalValueAfterOperations(char** arr, int n) {
    int x = 0;
    for(int i = 0; i < n; i++){
        if(arr[i][1] == '+') x++;
        else x--;
    }
    return x;
}