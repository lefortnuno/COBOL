#include <stdlib.h>

typedef struct {
    int val;
    int index;
} IndexedNum;

int compare(const void* a, const void* b) {
    return ((IndexedNum*)a)->val - ((IndexedNum*)b)->val;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    IndexedNum* arr = (IndexedNum*)malloc(numsSize * sizeof(IndexedNum));
    
    for (int i = 0; i < numsSize; i++) {
        arr[i].val = nums[i];
        arr[i].index = i;
    }

    // Trie les éléments par valeur
    qsort(arr, numsSize, sizeof(IndexedNum), compare);

    // Deux pointeurs
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        int sum = arr[left].val + arr[right].val;
        if (sum == target) {
            int* res = (int*)malloc(2 * sizeof(int));
            res[0] = arr[left].index;
            res[1] = arr[right].index;
            *returnSize = 2;
            free(arr);
            return res;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
 
    *returnSize = 0;
    free(arr);
    return NULL;
}
