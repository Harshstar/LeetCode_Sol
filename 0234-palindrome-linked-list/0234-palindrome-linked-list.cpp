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
    
    ListNode* reverseL(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* newnode=NULL;
        while(head!=NULL)
        {
            newnode=head->next;
            head->next=prev;
            prev=head;
            head=newnode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverseL(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(slow->val!=head->val)
                return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};