// Problem: https://leetcode.com/problems/merge-two-sorted-lists/description/
// Solution by Harsha Hegde
// Description: In-place merge of two sorted singly linked lists without using extra memory.
// Approach: 
//  - Traverse both lists simultaneously.
//  - Compare current nodes from both lists.
//  - Rewire `next` pointers based on value comparison.
//  - Carefully track and update previous pointer to maintain list integrity.
//  - Determine correct head of the merged list based on the first insertion.
//  - Attach remaining nodes of the longer list at the end.

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) return list2;  // Return list2 if list1 is empty
    if (list2 == NULL) return list1;  // Return list1 if list2 is empty

    int first_node = 0;
    struct ListNode* head = NULL;
    struct ListNode* pointer1 = list1;
    struct ListNode* pointer2 = list2;
    struct ListNode* prev_pointer2 = NULL;

    while (pointer1 != NULL && pointer2 != NULL) {
        int data1 = pointer1->val;
        int data2 = pointer2->val;

        if (data1 <= data2) {
            if (first_node == 0) {
                head = pointer1;
                first_node = 1;  // Head comes from list1
            }
            struct ListNode* temp1 = pointer1->next;
            pointer1->next = pointer2;

            if (prev_pointer2 != NULL) {
                prev_pointer2->next = pointer1;
            }

            prev_pointer2 = pointer1;
            pointer1 = temp1;
        } else {
            if (first_node == 0) {
                head = pointer2;
                first_node = 1;  // Head comes from list2
            }
            struct ListNode* temp2 = pointer2->next;
            pointer2->next = pointer1;

            if (prev_pointer2 != NULL) {
                prev_pointer2->next = pointer2;
            }

            prev_pointer2 = pointer2;
            pointer2 = temp2;
        }
    }

    // Append remaining nodes
    if (pointer1 != NULL) {
        prev_pointer2->next = pointer1;
    } else if (pointer2 != NULL) {
        prev_pointer2->next = pointer2;
    }

    return head;
}
