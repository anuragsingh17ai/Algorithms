/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
                <---   |  ---> 
            5 7 3      |    3 7 5
          + 2 4 7      |  + 7 4 2
            ------     |   -------
            8 2 0      |    0 2 8
 */

   
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=(l1->val+l2->val)/10;
                                                                        //---1
        ListNode* l3=new ListNode((l1->val+l2->val)%10); // 8+5=13         --3 
        ListNode* head=l3;                              //  13%10=3
        l1=l1->next;                                    //carry=13/10=1
        l2=l2->next;
                                                       
        
        while(l1 || l2 || carry)
        {
            int v=0;                                  // 1 2 3
            if(l1) v+=l1->val, l1=l1->next;           // 3 4
            if(l2) v+=l2->val, l2=l2->next;        
            v=v+carry;                                // l3 4->6->3
            
            ListNode *temp=new ListNode(v%10);
            l3->next=temp;
            l3=temp;
            
            carry=v/10;
        }
        
        return head;
        
        
    }
};
