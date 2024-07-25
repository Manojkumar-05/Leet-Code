int strStr(char* hay, char* needle) {
    int h = strlen(hay);
    int n = strlen(needle);
    if(n > h) return -1;
    if(h == 1 && hay[0] == needle[0]) return 0;
    for(int i = 0; i+n-1 < h; i++){
        if(hay[i] == needle[0] && hay[i+n-1]){
            if(!strncmp(needle, hay+i, n)) return i;
        }
    }
    return -1;
}