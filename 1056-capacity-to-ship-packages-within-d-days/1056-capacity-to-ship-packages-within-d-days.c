int mini(int *arr, int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++) if(arr[i] > max) max = arr[i];
    return max;
}
int maxi(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return sum;
}
int daysreq(int *arr, int n, int val){
    int count = 0, sum = 0;
        for(int i = 0; i < n; i++){
            if(sum + arr[i] <= val) sum += arr[i];
            else {
                count++; 
                sum = arr[i];
            }
        }
        return count;
}
int shipWithinDays(int* arr, int n, int days) {
    int min = mini(arr, n), max = maxi(arr, n);
    while(min <= max){
        int mid = (min + max) / 2;
        if(daysreq(arr, n, mid) < days) max = mid - 1;
        else min = mid + 1;
    }
    return min;
}