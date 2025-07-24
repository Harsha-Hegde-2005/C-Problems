// this problem is from LeetCode
//Problem : https://leetcode.com/problems/move-zeroes/description/
//Solution by Harsha Hegde : 

void moveZeroes(int* nums, int numsSize) {
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        nums[k++]=nums[i];
    }
    for(int j=k;j<numsSize;j++)
    {
        nums[j]=0;
    }
}
