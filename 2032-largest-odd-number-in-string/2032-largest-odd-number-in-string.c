int isOdd(char n){
    if((n - '0') % 2 == 1) return 1;
    return 0;
}
char* largestOddNumber(char* s) {
    int n = strlen(s);
    int st=0, en=n, j = 0;
    if(isOdd(s[n-1])) return s;
    char* ans = (char*)malloc(en - st + 2);
    // for(st = 0; st < n; st++) if(isOdd(s[st])) break;
    for(en = n; en >= 0; en--) if(isOdd(s[en])) break;
    for(int i = 0; i <= en; i++,j++) ans[j]=s[i];
    ans[j] = '\0';
    return ans;
}