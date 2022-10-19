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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* l3=new ListNode();
        ListNode* head=l3;
        while(list1 && list2)
        {
            ListNode* temp=new ListNode();
            if(list1->val>=list2->val)
            {
                temp->val=list2->val;
                temp->next=NULL;
                list2=list2->next;
            }
            else
            {
                temp->val=list1->val;
                temp->next=NULL;
                list1=list1->next;
            }
            l3->next=temp;
            l3=temp;
        }
        while(list1)
        {
            ListNode* temp=new ListNode();
            temp->val=list1->val;
            temp->next=NULL;
            l3->next=temp;
            l3=temp;
            list1=list1->next;
        }
        while(list2)
        {
            ListNode* temp=new ListNode();
            temp->val=list2->val;
            temp->next=NULL;
            l3->next=temp;
            l3=temp;
            list2=list2->next;   
        }
        return head->next;
    }
};
