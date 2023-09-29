Decoding String and Finding k-th Character

Given an encoded string s consisting of lowercase English letters and digits, we need to decode it to form a new string. The encoding rule is as follows: a letter a followed by a digit n indicates that a should be repeated n times to form part of the decoded string. For example, the encoding "a2b3" would be decoded to "aabbb".

The goal is to determine the character that is at the k-th position (1-indexed) in the decoded string.

example:
Input: s = "a2b3", k = 5
Decoded String: "aabbb"
Output: "b" (The 5th character in the decoded string is "b")

Solution:

    Calculate Decoded Length: Traverse the input string s and calculate the total length of the decoded string.

    Find k-th Character: Traverse the input string s in reverse order. Adjust the total length and k according to the encountered characters.
    When a letter is found, check whether it's the k-th character in the decoded string. If it is
    return this character.

Function Signature:
char* decodeAtIndex(char* s, int k);

Parameters:

    s: A pointer to the input string containing lowercase English letters and digits.
    k: An integer representing the 1-indexed position of the character to be found in the decoded string.

Return:

    Returns a pointer to a string containing the character at the k-th position in the decoded string. If no character is found, it returns an empty string.

