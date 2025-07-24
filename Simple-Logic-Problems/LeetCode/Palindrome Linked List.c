// this problem is from LeetCode
//Problem : https://leetcode.com/problems/palindrome-linked-list/description/
//Solution by Harsha Hegde : 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int *nums=malloc(100000*sizeof(int));
    int k=0;
    while(head!=NULL)
    {
        nums[k++]=head->val;
        head=head->next;
    }
    int i=0,j=k-1;
    while(i<j)
    {
        if(nums[i++]!=nums[j--])
        return false;
    }
    free(nums);
    return true;
}
