/*
    Two Sum Problem - LeetCode
    URL: https://leetcode.com/problems/two-sum/
    
    Language: C
    Method: hash table (or a hash map)
    Time complexity of O(n)

    Author: Seiji - 24/09/23
*/

// building blocks
struct HashNode {
    int key;
    int value;
    struct HashNode *next;
};

struct HashTable {
    int size;
    struct HashNode **list;
};

// set up of the hash table
struct HashTable* createHashTable(int size) {
    struct HashTable *table = (struct HashTable*) malloc(sizeof(struct HashTable));
    table->size = size;
    table->list = (struct HashNode**) malloc(sizeof(struct HashNode*) * size);
    for(int i = 0; i < size; i++) {
        table->list[i] = NULL;
    }
    return table;
}

// handlers (insert and search)
void insert(struct HashTable *table, int key, int value) {
    int hash = (key % table->size + table->size) % table->size;
    struct HashNode *newNode = (struct HashNode*) malloc(sizeof(struct HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = table->list[hash];
    table->list[hash] = newNode;
}

struct HashNode* search(struct HashTable *table, int key) {
    int hash = (key % table->size + table->size) % table->size;
    struct HashNode *temp = table->list[hash];
    while(temp != NULL) {
        if(temp->key == key) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// free
void freeHashTable(struct HashTable *table) {
    for(int i = 0; i < table->size; i++) {
        struct HashNode *current = table->list[i];
        while(current != NULL) {
            struct HashNode *temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(table->list);
    free(table);
}

// main function 
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *result = (int*) malloc(sizeof(int) * (*returnSize));
    struct HashTable *table = createHashTable(numsSize);

    for(int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        struct HashNode *node = search(table, complement);
        if(node != NULL) {
            result[0] = node->value;
            result[1] = i;
            
            freeHashTable(table);
            return result;
        }
        insert(table, nums[i], i);
    }

    // safeguard case
    freeHashTable(table);
    free(result);
    return NULL;
}