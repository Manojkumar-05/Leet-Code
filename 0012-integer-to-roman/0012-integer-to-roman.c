char* intToRoman(int num) {
    int val[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    const char* sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i = 12;
    char *ans = (char*)malloc(20 * sizeof(char));
    int idx = 0;
    while(num){
        if(num >= val[i]){
            num -= val[i];
            ans[idx++] = sym[i][0]; 
            if(strlen(sym[i]) == 2) ans[idx++] = sym[i][1];
            printf("%s ", ans);
        }
        else i--;
    }
    ans[idx] = '\0';
    return ans;
}