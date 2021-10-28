class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mp;
        ListNode* curr=head;
        while(curr)
        {
            if(mp[curr]>0)
                return true;
            mp[curr]++;
            curr=curr->next;
        }
        return false;
    }
};
