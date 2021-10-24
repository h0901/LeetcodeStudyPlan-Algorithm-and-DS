class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int len=0,i=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        temp=head;
        while((len/2) !=i && temp->next!=NULL)
        {
            temp=temp->next;
            i++;
        }
        return temp;
    }
};
