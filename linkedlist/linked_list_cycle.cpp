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
    bool hasCycle(ListNode *head) {
        
        ListNode *l=head;
        unordered_map<ListNode*,int> m;
        
        while(l)
        {
            m[l]++;
            
            if(m[l]>1)
                return true;
            
            l=l->next;
        }
        return false;
        
    }
};
