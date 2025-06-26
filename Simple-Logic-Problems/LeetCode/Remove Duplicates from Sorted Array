// this problem is from LeetCode
//Problem : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//Solution by Harsha Hegde :

int removeDuplicates(int* nums, int numsSize) {
    int i=0,k=0;
    while(i<numsSize-1)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[k++]=nums[i];
        }
    i++;
    }
    nums[k++]=nums[i];
    return k;
}
