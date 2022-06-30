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
        ListNode* merged = new ListNode();
        ListNode* temp = merged;
        ListNode* i = list1;
        ListNode* j = list2;
        while(i!=NULL && j!=NULL){
            if(i->val < j->val){
                ListNode* n = new ListNode(i->val);
                temp->next = n;
                i=i->next;
            }else if(i->val > j->val){
                ListNode* n = new ListNode(j->val);
                temp->next = n;
                j=j->next;
            }else{
                 ListNode* n1 = new ListNode(i->val);
                 ListNode* n2 = new ListNode(j->val);
                 n1->next = n2;
                 temp->next = n1;
                 i=i->next;
                 j=j->next;
                 temp=temp->next;
            }
           
            temp=temp->next;
        }
        while(i!=NULL){
            ListNode* n = new ListNode(i->val);
            temp->next = n;
            i=i->next;
            temp=temp->next;
        }
        while(j!=NULL){
            ListNode* n = new ListNode(j->val);
            temp->next = n;
            j=j->next;
            temp=temp->next;
        }
        return merged->next;
    }
};