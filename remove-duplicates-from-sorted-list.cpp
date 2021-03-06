class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p{head};
        while(p!=nullptr and p->next!=nullptr)
        {
            if(p->next->val == p->val) p->next=p->next->next;
            else p=p->next;
        }
        return head;
    }
};
