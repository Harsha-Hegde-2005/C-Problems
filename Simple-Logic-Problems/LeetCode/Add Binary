// this problem is from LeetCode
//Problem : https://leetcode.com/problems/add-binary/description/
//Solution by Harsha Hegde : 

char* addBinary(char* a, char* b) {
    int l1 = strlen(a);
    int l2 = strlen(b);
    int maxLen = (l1 > l2 ? l1 : l2) + 2;  // +1 for possible carry, +1 for '\0'

    char* result = malloc(maxLen * sizeof(char));
    result[maxLen - 1] = '\0'; // Null terminator

    int i = l1 - 1, j = l2 - 1, k = maxLen - 2;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? a[i--] - '0' : 0;
        int bitB = (j >= 0) ? b[j--] - '0' : 0;

        int sum = bitA + bitB + carry;
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    // Skip unused leading space
    return result + k + 1;
}
