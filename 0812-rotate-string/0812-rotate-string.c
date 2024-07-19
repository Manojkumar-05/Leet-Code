bool rotateString(char* s, char* goal) {
    int n = strlen(s);
    if(n != strlen(goal)) return false;
    char arr[(2*n) + 1];
    strcpy(arr, s);
    strcpy(arr + n, s);
    printf("%s ", arr);
    if(strstr(arr, goal)) return true;
    return false;
}