// this problem is from LeetCode
//Problem : https://leetcode.com/problems/merge-sorted-array/description/
//Solution by Harsha Hegde : 

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int j=0;
    for(int i=m;i<nums1Size;i++)
    {
        nums1[i]=nums2[j];
        j++;
    }
    for(int k=0;k<nums1Size-1;k++)
    {
        for(int l=k+1;l<nums1Size;l++)
        {
            if(nums1[l]<nums1[k])
            {
                int temp=nums1[k];
                nums1[k]=nums1[l];
                nums1[l]=temp;
            }
        }
    }
}
