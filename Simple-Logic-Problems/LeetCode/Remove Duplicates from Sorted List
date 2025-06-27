// this problem is from LeetCode
//Problem : https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
//Solution by Harsha Hegde : 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* list_head=head;
    if(list_head==NULL)
    return NULL;
    struct ListNode* current=list_head;
    while(current->next!=NULL)
    {
        struct ListNode* next_node=current->next;
        if(current->val==next_node->val)
            current->next=next_node->next;
        else
            current=current->next;
    }
    return list_head;
}
