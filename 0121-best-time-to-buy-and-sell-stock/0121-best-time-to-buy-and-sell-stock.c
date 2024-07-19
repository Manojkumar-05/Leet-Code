int maxProfit(int* arr, int n) {
    int max = 0, min = arr[0], idx = 0, temp;

    for(int i = 1; i < n; i++){
        if(min > arr[i]) min = arr[i];
        temp = arr[i] - min;
        printf("%d ", temp);
        if(temp > max) max = arr[i] - min;
    }
    return max;
}