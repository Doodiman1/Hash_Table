#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int index;
} Entry;

#define TABLE_SIZE 1000

int hash (int key) {
    return key % TABLE_SIZE;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    Entry* hashTable[TABLE_SIZE] = {NULL};
    
    for (int i = 0; i < numsSize; i ++) {
        int compliment = target - nums[i];
        int hashIndex = hash(compliment);
        
        if (hashTable[hashIndex] != NULL) {
            *returnSize = 2;
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = hashTable[hashIndex]->index;
            result[1] = i;
            printf("Index created, Key: %d || Value: %d\n", nums[i], i);
            printf("Index Found: %d\n", compliment);
            return result;
        }
        
        Entry* entry = (Entry*)malloc(sizeof(Entry));
        entry->key = nums[i];
        entry->index = i;
        hashTable[hash(nums[i])] = entry;
        printf("Index created, Key: %d|| Value: %d\n", entry->key, entry->index );
    }
    *returnSize = 0;
    return NULL;
}


int main() {
    int nums[] = {2, 7, 11, 15, 30, 473, 70}
;
int target = 475;
int returnSize;
printf("Target:%d\n", target);
int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

if (result != NULL) {
    for (int i = 0; i < returnSize; i++){
        printf("Result #%d: %d\n", i + 1, result[i]);
    }
    printf("\n");
    free(result);
    } else {
        printf("No Solution Found\n");
    }
    return 0;
}