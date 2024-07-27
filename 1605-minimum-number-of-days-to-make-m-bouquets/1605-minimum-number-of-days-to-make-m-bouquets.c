int maxi(int *arr, int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++) if(arr[i] > max) max = arr[i];
    return max;
}
int mini(int *arr, int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++) if(arr[i] < min) min = arr[i];
    return min;
}

bool possible(int *arr, int n, int day, int m, int k){
    int count = 0, bokehCounter = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] <= day){
                count++;
                if(count == k) {
                    bokehCounter++;
                    count = 0;
                }
            }else count = 0;
        }
        return bokehCounter >= m;
}

int minDays(int* arr, int n, int m, int k) {
    if((long long)m * k > n) return -1;
    int max = maxi(arr, n);
    int min = mini(arr, n);
    while(min < max){
        int mid = (max + min) / 2;
        if(possible(arr, n, mid, m, k)) max = mid;
        else min = mid + 1;
    }
    return min;
}