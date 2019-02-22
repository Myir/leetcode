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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ap[n+1];
        for (int i=0;i<n+1;i++)
        {
            ap[i] = (ListNode*)malloc(sizeof(ListNode));
        }
        ap[0] = head;
        ListNode* oprt = head;
        int cout = 1;
        while(oprt->next!=NULL)
        {
            ap[cout%(n+1)] = oprt->next;
            oprt = oprt->next;
            cout++;
        }
        if(cout==n)
            return head->next;
        if((cout-1)%(n+1)!=n)
        {
            if(ap[n]==NULL)
                return head->next;
            ap[(cout-1)%(n+1)+1]->next=ap[(cout-1)%(n+1)+1]->next->next;
        }
        else
            ap[0]->next=ap[0]->next->next;
        return head;
        
    }
};