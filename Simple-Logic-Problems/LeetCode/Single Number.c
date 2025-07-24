// this problem is from LeetCode
//Problem : https://leetcode.com/problems/single-number/description/
//Solution by Harsha Hegde : 

apporach 1 : Using XOR property to remove the duplicates ( time complexity O(n) )

int singleNumber(int* nums, int numsSize) {
int result=0;
for(int i=0;i<numsSize;i++)
{
    result^=nums[i];
}
return result;
}


approach 2 : Using sorting and comparing the adjacents ( Time complexity O(n^2) )

int singleNumber(int* nums, int numsSize) {
    if(numsSize==1)
    return nums[0];
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[j]<nums[i])
            {
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
        }
    }
    int j=0;
    while(j<numsSize-1)
    {
        if(nums[j]!=nums[j+1])
        return nums[j];
        else
        j+=2;
    }
    if(j==numsSize-1)
    return nums[j];
    return 0;
}
