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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode * li=head;
        ListNode *temp=head;
        
        if(!li)
            return head;
        
        else if(li->next==NULL)
            return head;
        
        while(temp)
        {
            if(temp->val==li->val)
                temp=temp->next;
            else
            {
                li->next=temp;
                li=li->next;
                temp->next;
            }
        }
        li->next=NULL;
        return head;
        
    }
};
