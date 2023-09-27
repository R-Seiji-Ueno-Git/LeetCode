/*
    389. Find the Difference - LeetCode
    URL: https://leetcode.com/problems/find-the-difference/description/?envType=daily-question&envId=2023-09-25
    
    Language: C
    Method: XoR
    Time complexity of O(n)

    Author: Seiji - 25/09/23
*/

char findTheDifference(char * s, char * t){
    char result = 0;
    while (*s != '\0') {
        result ^= *s;
        s++;
    }
    while (*t != '\0') {
        result ^= *t;
        t++;
    }
    return result;
}
