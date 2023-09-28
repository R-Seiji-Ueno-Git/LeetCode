/*
    Two Sum Problem V1- LeetCode
    URL: https://leetcode.com/problems/two-sum/
    
    Language: C
    Method: Brute Force
    Time complexity of O(n^2)
*/

The easiest way, The brute force approach involves checking every possible pair of numbers in the array to see if their sum matches the target value.

/*
    Two Sum Problem V2 - LeetCode
    URL: https://leetcode.com/problems/two-sum/
    
    Language: C
    Method: hash table (or a hash map)
    Time complexity of O(n)

    Author: Seiji - 25/09/23
*/

Using -> int hash = key % table->size;
Will lead sooner or later to a heap-buffer-overflow! 

The vulnerability was in the modulo operator,if there are any collisions
(two different keys map to the same index), the code handles this by chaining.
(linking all collided elements in a linked list).

The "key % table->size" can be an issue if key is negative, as it will produce a negative hash! 
leading to out-of-bounds memory access.
Since array indices must be non-negative, this can result in a buffer overflow.

Solved Using -> int hash = (key % table->size + table->size) % table->size;

This way, even if "key % table->size" is negative
adding table->size makes it positive!
then taking the modulo again ensures the result is within the correct range
[0, table->size - 1].
This prevents any attempt to access the array out of its bounds and thus avoids undefined behavior.

Other way to solve it, is to use -> int hash = abs(key % table->size);
We can use abs in this case because we are dealing with int values.






