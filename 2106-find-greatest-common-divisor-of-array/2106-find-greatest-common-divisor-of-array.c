int gcd(int max, int min){
    int i = min;
    while(i>1){
        if((max % i == 0) && (min % i == 0)) return i;
        i--;
    }
    return 1;
}

int findGCD(int* arr, int n) {
    int max = INT_MIN, min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    return gcd(max, min);
}