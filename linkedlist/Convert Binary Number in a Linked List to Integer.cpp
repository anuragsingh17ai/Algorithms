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
    int getDecimalValue(ListNode* head) {
    
        ListNode* hd=head;
        int n=0;
        long long digit=0;
        
        while(hd)
        {
            n++;
            hd=hd->next;
        }
        
        while(head)
        {
            --n;
            if(head->next==NULL)
            {
                if(head->val==1)
                    digit++;
            }
            else if(head->val==1)
                digit=digit+pow(2,n);
            
            head=head->next;
        }
        return digit;
        
        
        
        
    }
};
