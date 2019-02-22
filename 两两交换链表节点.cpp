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
    ListNode* swapPairs(ListNode* head) {
        ListNode* h = new ListNode(-1);
        h->next = head;
        ListNode* pre = h;
        while(pre->next!=NULL && pre->next->next !=NULL)
        {
            ListNode* node1 = pre->next;
            ListNode* node2 = node1->next;
            ListNode* lat = node2->next;
            pre->next = node2;
            node2->next = node1;
            node1->next = lat;
            
            pre = node1;
        }
        return h->next;
        

    }
};