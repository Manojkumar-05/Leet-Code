bool check(int* arr, int n) {
    int c = 0;
    for(int i = 0; i < n; i++) if(arr[i] > arr[(i+1) % n]) c++;
    return c <= 1;
}