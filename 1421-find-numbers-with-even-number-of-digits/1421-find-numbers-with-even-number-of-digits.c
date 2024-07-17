int order(int n){
    int c = 0;
    while(n){n /= 10; c++;}
    return c; 
}
int findNumbers(int* arr, int n) {
    int c = 0;
    for(int i = 0; i < n; i++) if(order(arr[i]) % 2 == 0) c++;
    return c;
}