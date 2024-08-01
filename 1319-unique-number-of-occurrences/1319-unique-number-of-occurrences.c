bool uniqueOccurrences(int* arr, int n) {

    int map[2001] = {0};
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) map[arr[i]+1001]++;
        else map[arr[i]]++;
    }
    for(int i = 0; i < 2001; i++){
        for(int j = i + 1; j < 2001; j++){
            if(map[j] != 0 && map[i] == map[j]){
                printf("%d : %d", map[i], map[j]);
                 return false;}
            }
        }
    return true;
}