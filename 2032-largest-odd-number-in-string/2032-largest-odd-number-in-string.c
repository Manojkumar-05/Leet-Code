int isOdd(char n){
    int a=(int)(n - '0') % 2 == 1;
    printf("-%d--%d-%c-\n",a,n,n);
    if(a) return 1;
    return 0;
}
char* largestOddNumber(char* s) {
    int n = strlen(s);
    int  en, j = 0;
    if(isOdd(s[n-1])) return s;
    // for(st = 0; st < n; st++) if(isOdd(s[st])) break;
    for(en = n; en >= 0; en--) if(isOdd(s[en])) break;
    // printf("%d, %d, %d", n, st, en);
    char* ans = (char*)malloc(en + 2);
    for(int i = 0; i <= en; i++,j++) ans[j]=s[i];
    ans[j] = '\0';
    return ans;
}