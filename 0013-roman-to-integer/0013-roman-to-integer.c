int romanToInt(char* s) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int sum = 0, i = 0, n = strlen(s);
    while(i < n){
        for(int idx = 0; idx < 13; idx++){
            int len = strlen(sym[idx]);
            if(!strncmp(s + i, sym[idx], len)){
                sum += val[idx];
                i+=len;
                break;
            }
        }
    }
    return sum;
}