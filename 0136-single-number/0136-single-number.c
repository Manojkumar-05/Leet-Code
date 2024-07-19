int singleNumber(int* arr, int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i] == arr[j]) {arr[i] = 0; arr[j] = 0;}
    for(int j = 0; j < n; j++) if(arr[j] != 0) return arr[j];
    return 0;
}