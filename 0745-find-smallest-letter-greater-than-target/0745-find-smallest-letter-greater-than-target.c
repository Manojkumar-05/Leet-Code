char nextGreatestLetter(char* arr, int n, char target) {
    char min = 'z';
    int flag = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] > target && arr[i] <= min){ min = arr[i]; flag = 1;}
    if(flag == 0) return arr[0];
    return min;
}