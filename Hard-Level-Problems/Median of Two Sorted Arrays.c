// this problem is from LeetCode
//Problem : https://leetcode.com/problems/median-of-two-sorted-arrays/descripti
//Solution by Harsha Hegde :  

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int k = 0, i = 0, j = 0;

    // Total size of the merged array
    int numsSize = nums1Size + nums2Size;

    // Allocate memory for the merged array
    int *nums = malloc(numsSize * sizeof(int));

    // Merge elements from both arrays while both have remaining elements
    while (i < nums1Size && j < nums2Size) {
        int val1 = nums1[i], val2 = nums2[j];

        // If nums1[i] is smaller, add it and move its pointer
        if (val1 < val2) {
            nums[k++] = val1;
            i++;
        }
        // If nums2[j] is smaller, add it and move its pointer
        else if (val1 > val2) {
            nums[k++] = val2;
            j++;
        }
        // If both are equal, add both and move both pointers
        else {
            nums[k++] = val1;
            nums[k++] = val2;
            i++;
            j++;
        }
    }

    // If nums1 has remaining elements, append them
    while (i < nums1Size)
        nums[k++] = nums1[i++];

    // If nums2 has remaining elements, append them
    while (j < nums2Size)
        nums[k++] = nums2[j++];

    // Calculate the median
    int mid = numsSize / 2;
    double median;

    // If total length is even, take average of middle two elements
    if (numsSize % 2 == 0)
        median = ((double)nums[mid - 1] + (double)nums[mid]) / 2.0;
    else
        median = (double)nums[mid];  // If odd, take the middle element

    // Free the allocated memory
    free(nums);

    return median;
}
