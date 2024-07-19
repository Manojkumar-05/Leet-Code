int maxDepth(char* s) {
    int max = 0, curr = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '(') curr++;
        if(s[i] == ')') curr--;
        if(max < curr) max = curr;
    } 
    return max;
}