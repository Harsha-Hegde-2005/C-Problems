// this problem is from LeetCode
//Problem : https://leetcode.com/problems/contains-duplicate/description/
//Solution by Harsha Hegde : 

bool containsDuplicate(int* nums, int numsSize) {
    long long hashSize=2000000001;
    long long OFFSET=1000000000;
    int *hash=calloc(hashSize,sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        long long index=nums[i] + OFFSET;
        if(hash[index])
        {
            free(hash);
            return true;
        }
        hash[index]=1;
    }
    free(hash);
    return false;
}
