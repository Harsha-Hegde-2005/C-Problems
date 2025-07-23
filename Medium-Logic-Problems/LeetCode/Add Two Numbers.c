// this problem is from LeetCode
//Problem : https://leetcode.com/problems/add-two-numbers/description/
//Solution by Harsha Hegde : 

/** 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* p1=l1;
    struct ListNode* p2=l2;
    int carry=0,carrynode=0;
    struct ListNode* current=l2;
    while(current->next!=NULL)
    current=current->next;
    struct ListNode* tail=current;
    while(p1 != NULL || p2!=NULL)
    {
    create:
        if(p2==NULL)
        {
            p2=malloc(sizeof(struct ListNode));
            p2->val=(carrynode)?1:0;
            p2->next=NULL;
            tail->next=p2;
            tail=p2;
            if(carrynode)
            goto end;
        }
        int x=(p1==NULL)?0:p1->val;
        int sum=p2->val+x+carry;
        p2->val=(sum>9)?sum-10:sum;
        carry=(sum>9)?1:0;
        sum=0;
        if(p1!=NULL)
        p1=p1->next;
        p2=p2->next;
    }
    if(carry==1)
    {
        carrynode=1;
        goto create;
    }
    end:
    return l2;
}
