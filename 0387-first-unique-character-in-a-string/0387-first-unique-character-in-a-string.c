int firstUniqChar(char* s) {
    int seen[26] = {0};
    for(int i = 0; i < strlen(s); i++) seen[s[i] - 97]++;
    for(int i = 0; i < strlen(s); i++) if(seen[s[i] - 97] == 1) return i;
    return -1; 
}