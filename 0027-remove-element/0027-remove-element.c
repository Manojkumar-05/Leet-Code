int removeElement(int* arr, int n, int val) {
    int i, c = 0;
    for(i = 0; i < n; i++) if(arr[i] != val) arr[c++] = arr[i]; 
    return c;
}