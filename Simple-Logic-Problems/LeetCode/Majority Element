// this problem is from LeetCode
//Problem : https://leetcode.com/problems/majority-element/
//Solution by Harsha Hegde : 

//Logic : This code solves problem using Boyer Moore voting algorithm.

int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }
    return candidate;
}

