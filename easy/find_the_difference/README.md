Solution Method: XOR (Exclusive OR)
Time Complexity: O(n)

The solution to this problem utilizes the XOR (Exclusive OR) operation to find the added letter efficiently.

    Initialize result as 0.
    Iterate through characters in s and t.
    Perform XOR operations to cancel common characters.
    Return the result, which is the added letter.

Note: This solution works because XORing a character with itself results in 0, and XORing 0 with any character returns the character itself. Therefore, all common characters between s and t will cancel out, leaving only the added letter in the result.