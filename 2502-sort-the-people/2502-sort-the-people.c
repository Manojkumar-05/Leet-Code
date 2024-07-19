/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int n, int* h, int m, int* rS) {
    *rS = n;
    for(int i = 0; i  < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(h[j] < h[j+1]) {

                char* name = names[j];
                names[j] = names[j+1];
                names[j+1] = name;

                int t = h[j];
                h[j] = h[j+1];
                h[j+1] = t;
            }
        }
    }
    return names;
}