/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res;
        ListNode* oprt;
        if(l1==NULL && l2==NULL)
            return NULL;
        else if(l1==NULL && l2!=NULL)
            return l2;
        else if(l1!=NULL && l2==NULL)
            return l1;
        if(l1->val<=l2->val)
        {
            res = l1;
            l1 = l1->next;
        }
        else if(l1->val>l2->val)
        {
            res = l2;
            l2 = l2->next;
        }
        oprt = res;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1==NULL)
            {
                oprt->next = l2;
                return res;
            }
            else if(l2==NULL)
            {
                oprt->next = l1;
                return res;
            }
            if(l1->val<=l2->val)
            {
                oprt->next = l1;
                l1 = l1->next;
            }
            else if(l1->val>l2->val)
            {
                oprt->next = l2;
                l2 = l2->next;
            }
            oprt = oprt->next;
        }
        return oprt;
    }
};