class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp = head;
        ListNode* dummy;
        int length = 0;
        while(temp)
        {
            length++;
            temp = temp->next;
        }
        int nodeDelete = length - n;
        if(nodeDelete == 0)
        {
            dummy = head;
            head = head->next;
            delete dummy;
            return head;
        }
        nodeDelete -= 1;
        temp = head;
        while(nodeDelete--)
        {
            temp = temp->next;
        }
        dummy = temp->next;
        temp->next = dummy->next;
        delete dummy;
        return head;
    }
};
