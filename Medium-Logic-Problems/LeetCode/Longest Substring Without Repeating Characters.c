// this problem is from LeetCode
//Problem : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
//Solution by Harsha Hegde : 
 
int lengthOfLongestSubstring(char* s) {
    if (strlen(s) == 0) return 0;
    if (strlen(s) == 1) return 1;

    int frequency[128] = {0};
    int prev_index[128];
    for (int i = 0; i < 128; i++) prev_index[i] = -1;

    int max = 0, count = 0, start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];                                    // support all ASCII

        if (frequency[c] == 1) {
                                              // Move start to avoid the previous duplicate
            if (prev_index[c] >= start) {
                start = prev_index[c] + 1;
            }
        }

        count = i - start + 1;
        if (count > max)
            max = count;

        frequency[c] = 1;
        prev_index[c] = i;
    }

    return max;
}
