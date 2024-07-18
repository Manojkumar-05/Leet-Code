char* removeOuterParentheses(char* s) {
    int n = strlen(s);
    char *ans = (char*)malloc(n + 1);
    int count = 0, idx = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '(' && count == 0){count++; continue;}
        if(s[i] == '(') count++;
        if(s[i] == ')') count--;
        if(count == 0) continue;
        ans[idx++] = s[i];
        printf("%c ", s[i]);
    }
    ans[idx] = '\0';
    return ans;
}