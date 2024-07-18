char* reverseWords(char* s) {
    int n = strlen(s);
    int count = 0,start=0,end = n;
    for( ; start < n; start++) 
        if(!isspace(s[start]))  
            break;
    for( ; end >= 0 ; end--) 
        if(!isspace(s[end]))  
            break;
    if(start == n) return "";
    for(int i = start ;i <= end; i++){
        // if(i < n-1 && isspace(s[i]) && isspace(s[i+1])) continue;
        if(isspace(s[i]) && !isspace(s[i-1])) count++;
    }

    count++; 

    char arr[count][50];
    int w = 0, ch = 0;
    for(int i = start ; i < end; i++){
        if(isspace(s[i])){
            if(isspace(s[i-1])) continue;
            arr[w][ch] = '\0';
            w++; ch = 0;
            continue;
        }
        arr[w][ch++] = s[i];
    }
    arr[w][ch]='\0';
    char *ans = (char*)malloc(n + 1);
    int idx = 0;
    if(!isalnum(arr[w][0])) w--;

    for(int i = w; i >= 0; i--) {
        printf("-%s-\n", arr[i]);
        for(int j = 0; j < strlen(arr[i]); j++){
            ans[idx++] = arr[i][j];
        
        }
        if(i != 0) ans[idx++] = ' ';
    }
        ans[idx] = '\0';
    return ans; 
}