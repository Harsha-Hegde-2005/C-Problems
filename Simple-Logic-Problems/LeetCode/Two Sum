// this problem is from LeetCode
//Problem : https://leetcode.com/problems/two-sum/description/
//Solution by Harsha Hegde : 

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
      int *result=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                break;
            }
        }
    }
    return result;
}
