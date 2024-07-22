int countMatches(char*** arr, int n, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int count = 0;
    for(int i = 0; i < n; i++){
        switch(ruleKey[0]){
            case 't':
            if(!strcmp(arr[i][0], ruleValue)) count++;
            break;
            case 'c':
            if(!strcmp(arr[i][1], ruleValue)) count++;
            break;
            case 'n':
            if(!strcmp(arr[i][2], ruleValue)) count++;
            break;
        }
    }
    return count;
}