// this problem is from LeetCode
//Problem : https://leetcode.com/problems/plus-one/description/
//Solution by Harsha Hegde associated with Chatgpt (Passes all test cases) : 

#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    int i;
    
    // Max size = digitsSize + 1 (if we overflow like 999 -> 1000)
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));

    for (i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        result[i + 1] = sum % 10;
        carry = sum / 10;
    }

    if (carry == 1) {
        result[0] = 1;
        *returnSize = digitsSize + 1;
        return result;
    } else {
        *returnSize = digitsSize;
        return result + 1;
    }
}

-----------------------------------------------------------------------------------------------

// this problem is from LeetCode
//Problem : https://leetcode.com/problems/plus-one/description/
//Solution by Harsha Hegde (Passes 61 test cases) : 

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    long long value = 0;
    int count_9 = 0;

    while(i != digitsSize - 1) {
        value = value * 10 + digits[i];
        if(digits[i] == 9)
            count_9++;
        i++;
    }

    value = value*10+digits[i] + 1;

    int j = (digits[i] == 9 && count_9 == digitsSize - 1) ? digitsSize + 1 : digitsSize;
    long long temp = value;

    int* result = malloc(j * sizeof(int));
    *returnSize = j;

    int index = j - 1;
    while (temp != 0 && index >= 0) {
        result[index--] = temp % 10;
        temp = temp / 10;
    }

    return result;
}

