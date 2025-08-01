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
        ListNode head;
        int x;
        ListNode* curr=&head;
        // ListNode* curr1=list1;
        // ListNode* curr2=list2;
        while(list1 && list2){
            if(list1->val <= list2->val ){
                x=list1->val;
                list1=list1->next;
            }
            else{
                x=list2->val;
                list2=list2->next;
            }
            curr->next= new ListNode(x);
            curr=curr->next;
        }
        while(list1){
            x=list1->val;
            curr->next= new ListNode(x);
            curr=curr->next;
            list1=list1->next;
        }
        while(list2){
            x=list2->val;
            curr->next= new ListNode(x);
            curr=curr->next;
            list2=list2->next;
        }
        return head.next;
    }
};