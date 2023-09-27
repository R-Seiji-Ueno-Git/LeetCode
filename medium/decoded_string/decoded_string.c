/*
    880. Decoded String at Index - LeetCode
    URL: https://leetcode.com/problems/decoded-string-at-index/description/?envType=daily-question&envId=2023-09-27
    
    Language: C
    Method: Two-Pass algorithm
    Time complexity of O(N)

    Author: Seiji with help of the MohamedMamdouh20 guide - 27/09/23
    https://leetcode.com/MohamedMamdouh20/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

long long getDecodedLength(const char* s) {
    long long decodedLength = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (isdigit(s[i])) {
            decodedLength *= s[i] - '0';
        } else {
            decodedLength++;
        }
    }
    return decodedLength;
}

char* decodeAtIndex(char* s, int k) {
    long long decodedLength = getDecodedLength(s);

    for (int i = strlen(s) - 1; i >= 0; i--) {
        char c = s[i];
        if (isdigit(c)) {
            decodedLength /= c - '0';
            k = k % decodedLength;
        } else {
            if (k == 0 || decodedLength == k) {
                char* result = (char*)malloc(2 * sizeof(char));
                result[0] = c;
                result[1] = '\0';
                return result;
            }
            decodedLength--;
        }
    }
    return "";
}