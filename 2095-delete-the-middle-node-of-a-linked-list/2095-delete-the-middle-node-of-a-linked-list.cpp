/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
            return NULL;
        ListNode* ptr=head;
        ListNode* xtr=head;
        ListNode* prev= NULL;
        while(ptr!= NULL && ptr->next!=NULL)
        {
            prev = xtr;
            xtr=xtr->next;
            ptr = ptr->next->next;
           //head = head->next->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};
