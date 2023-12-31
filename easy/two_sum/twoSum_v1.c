/*
    Two Sum Problem - LeetCode
    URL: https://leetcode.com/problems/two-sum/
    
    Language: C
    Method: Brute Force
    Time complexity of O(n^2)

    Author: Seiji - 24/09/23
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;

    int *indices = (int*)malloc(sizeof(int) * (*returnSize));
    if (!indices) {
        return NULL;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if ((nums[i] + nums[j]) == target) {
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
        }
    }
    // safeguard case
    free(indices);
    return NULL;
}
