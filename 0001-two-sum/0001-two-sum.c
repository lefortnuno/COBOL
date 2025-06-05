/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* t, int n, int x, int* r) {
    for (unsigned short int i = 0; i < n; i++) {
        for (unsigned short int j = i + 1; j < n; j++) {
            if ((t[i] + t[j]) == x) {
                int* res = malloc(2 * sizeof(int));
                res[0] = i;
                res[1] = j;
                *r = 2;
                return res;
            }
        }
    }
    *r = 0;
    return NULL;
}